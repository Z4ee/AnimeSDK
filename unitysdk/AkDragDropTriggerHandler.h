#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

namespace AK::Wwise { class BaseType; }

#define AKDRAGDROPTRIGGERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18BA8650)
#define AKDRAGDROPTRIGGERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18BA8740)
#define AKDRAGDROPTRIGGERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x18BA86A0)
#define AKDRAGDROPTRIGGERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA87B0)
#define AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x18BA8910)
#define AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18BA8920)
#define AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x18BA8870)

inline static constexpr unsigned int AkDragDropTriggerHandler_TypeDefinitionIndex = 34704;

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

	::System::Void __iFixBaseProxy_Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_START_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
	}
};
