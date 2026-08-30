#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_EE0B1198D37A0F09;

#define RPG_CLIENT_RPGDEMOMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18037B30)
#define RPG_CLIENT_RPGDEMOMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x18037BC0)
#define RPG_CLIENT_RPGDEMOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x18037AC0)
#define RPG_CLIENT_RPGDEMOMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x18037BD0)
#define RPG_CLIENT_RPGDEMOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18037BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGDemoModule_TypeDefinitionIndex = 66766;

	class RPGDemoModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_EE0B1198D37A0F09* _PVPMgr_k__BackingField; // 0x10

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

		::Class_1_EE0B1198D37A0F09* get_PVPMgr()
		{
			return ((::Class_1_EE0B1198D37A0F09*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::Class_1_EE0B1198D37A0F09* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EE0B1198D37A0F09*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGDEMOMODULE_SET_PVPMGR_OFFSET))(this, a1);
		}
	};
}
