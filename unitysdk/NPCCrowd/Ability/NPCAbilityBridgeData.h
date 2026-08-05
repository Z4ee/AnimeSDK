#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1063EA30)
#define NPCCROWD_ABILITY_NPCABILITYBRIDGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1063EC10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityBridgeData_TypeDefinitionIndex = 48333;

	class NPCAbilityBridgeData : public ::System::Object
	{
	public:
		::System::Int32 stairType; // 0x10
		::NPCCrowd::Ability::FTransformFragment transform; // 0x14
		::System::Boolean IsPathFollowFinished; // 0x44
		::System::Boolean navmeshArrived; // 0x45
		::System::Boolean navmeshEnable; // 0x46
		::System::Single attractorCDTimer; // 0x48

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
