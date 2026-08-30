#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDFEC9C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__DESTROYLOCALENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xDFED990)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__DESTROYLOCALENTITY_B__1_OFFSET UNITYSDK_OFFSET(0xDFED9C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__DESTROYLOCALENTITY_B__2_OFFSET UNITYSDK_OFFSET(0xDFED9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass136_0_TypeDefinitionIndex = 62156;

	class RuntimeGroupManager___c__DisplayClass136_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10
		::System::UInt32 instanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DestroyLocalEntity_b__0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__DESTROYLOCALENTITY_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _DestroyLocalEntity_b__1(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__DESTROYLOCALENTITY_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _DestroyLocalEntity_b__2(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS136_0__DESTROYLOCALENTITY_B__2_OFFSET))(this, a1);
		}
	};
}
