#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

namespace AK::Wwise { class BaseType; }

#define AKDRAGDROPTRIGGERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C3CE7A0)
#define AKDRAGDROPTRIGGERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C3CE800)
#define AKDRAGDROPTRIGGERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1C3CE7B0)
#define AKDRAGDROPTRIGGERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CE810)

inline static constexpr unsigned int AkDragDropTriggerHandler_TypeDefinitionIndex = 31639;

class AkDragDropTriggerHandler : public ::AkTriggerHandler
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER_ONDESTROY_OFFSET))(this);
	}
};
