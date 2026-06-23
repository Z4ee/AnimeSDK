#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xD410CC0)
#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD410EA0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityBridgeData_TypeDefinitionIndex = 44419;

	class NPCAbilityBridgeData : public ::System::Object
	{
	public:
		::System::Int32 stairType; // 0x10
		::System::Single attractorCDTimer; // 0x14
		::System::Boolean IsPathFollowFinished; // 0x18
		::System::Boolean navmeshArrived; // 0x19
		::System::Boolean navmeshEnable; // 0x1A
		::NPCCrowd::Ability::FTransformFragment transform; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA__CTOR_OFFSET))(this);
		}

		::System::Void RefreshData(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA_REFRESHDATA_OFFSET))(this, ability);
		}
	};
}
