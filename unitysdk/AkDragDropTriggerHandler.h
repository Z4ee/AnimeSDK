#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerHandler.h"

namespace AK::Wwise { class BaseType; }

#define AKDRAGDROPTRIGGERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B42DB30)
#define AKDRAGDROPTRIGGERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B42DBD0)
#define AKDRAGDROPTRIGGERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x1B42DB80)
#define AKDRAGDROPTRIGGERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42DC40)
#define AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B42DCB0)
#define AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B42DCC0)
#define AKDRAGDROPTRIGGERHANDLER___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x1B42DCA0)

inline static constexpr unsigned int AkDragDropTriggerHandler_TypeDefinitionIndex = 41350;

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
