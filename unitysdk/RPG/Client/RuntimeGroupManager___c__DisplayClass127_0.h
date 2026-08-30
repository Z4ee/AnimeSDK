#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS127_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFEA520)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS127_0__REMOVELOCALLEGACYPROP_B__0_OFFSET UNITYSDK_OFFSET(0xDFED950)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass127_0_TypeDefinitionIndex = 62154;

	class RuntimeGroupManager___c__DisplayClass127_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS127_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveLocalLegacyProp_b__0(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS127_0__REMOVELOCALLEGACYPROP_B__0_OFFSET))(this, a1);
		}
	};
}
