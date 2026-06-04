#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

#define CLASS_2_9ECEE6EB2E77AA20_INIT_OFFSET UNITYSDK_OFFSET(0x1401A2B0)
#define CLASS_2_9ECEE6EB2E77AA20__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1401A370)
#define CLASS_2_9ECEE6EB2E77AA20__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1401A330)
#define CLASS_2_9ECEE6EB2E77AA20__CTOR_OFFSET UNITYSDK_OFFSET(0x1401A3B0)
#define CLASS_2_9ECEE6EB2E77AA20___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x1401A3D0)
#define CLASS_2_9ECEE6EB2E77AA20___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1401A4B0)
#define CLASS_2_9ECEE6EB2E77AA20___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1401A450)

inline static constexpr unsigned int Class_2_9ECEE6EB2E77AA20_TypeDefinitionIndex = 57990;

class Class_2_9ECEE6EB2E77AA20 : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20_INIT_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ECEE6EB2E77AA20___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
