#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS126_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC895190)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS126_0__REMOVELOCALLEGACYPROP_B__0_OFFSET UNITYSDK_OFFSET(0xC898130)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass126_0_TypeDefinitionIndex = 58053;

	class RuntimeGroupManager___c__DisplayClass126_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS126_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveLocalLegacyProp_b__0(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS126_0__REMOVELOCALLEGACYPROP_B__0_OFFSET))(this, a1);
		}
	};
}
