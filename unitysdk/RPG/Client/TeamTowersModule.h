#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_F384EF055EE9D363_1;

#define RPG_CLIENT_TEAMTOWERSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2C28B0)
#define RPG_CLIENT_TEAMTOWERSMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xB2C2940)
#define RPG_CLIENT_TEAMTOWERSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB2C27E0)
#define RPG_CLIENT_TEAMTOWERSMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0xB2C2950)
#define RPG_CLIENT_TEAMTOWERSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C2960)
#define RPG_CLIENT_TEAMTOWERSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2C2A10)
#define RPG_CLIENT_TEAMTOWERSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB2C2980)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamTowersModule_TypeDefinitionIndex = 62818;

	class TeamTowersModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_F384EF055EE9D363_1* _PVPMgr_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE_DISPOSE_OFFSET))(this);
		}

		::Class_1_F384EF055EE9D363_1* get_PVPMgr()
		{
			return ((::Class_1_F384EF055EE9D363_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::Class_1_F384EF055EE9D363_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F384EF055EE9D363_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE_SET_PVPMGR_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
