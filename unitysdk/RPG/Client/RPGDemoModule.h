#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_F384EF055EE9D363;

#define RPG_CLIENT_RPGDEMOMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA255230)
#define RPG_CLIENT_RPGDEMOMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xA2552C0)
#define RPG_CLIENT_RPGDEMOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA255180)
#define RPG_CLIENT_RPGDEMOMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xA2552D0)
#define RPG_CLIENT_RPGDEMOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2552E0)
#define RPG_CLIENT_RPGDEMOMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA255390)
#define RPG_CLIENT_RPGDEMOMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA255300)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGDemoModule_TypeDefinitionIndex = 54319;

	class RPGDemoModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_F384EF055EE9D363* _PVPMgr_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_DISPOSE_OFFSET))(this);
		}

		::Class_1_F384EF055EE9D363* get_PVPMgr()
		{
			return ((::Class_1_F384EF055EE9D363*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::Class_1_F384EF055EE9D363* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F384EF055EE9D363*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_SET_PVPMGR_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
