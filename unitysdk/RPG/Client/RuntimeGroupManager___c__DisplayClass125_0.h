#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS125_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFEA3A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS125_0__REMOVELOCALLEGACYNPC_B__0_OFFSET UNITYSDK_OFFSET(0xDFED930)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass125_0_TypeDefinitionIndex = 62153;

	class RuntimeGroupManager___c__DisplayClass125_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS125_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveLocalLegacyNpc_b__0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS125_0__REMOVELOCALLEGACYNPC_B__0_OFFSET))(this, a1);
		}
	};
}
