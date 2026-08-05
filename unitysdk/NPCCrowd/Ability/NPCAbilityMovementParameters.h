#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityMovementMoveStyleParameters; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS_GETMOVEMENTPARAMBYANIMID_OFFSET UNITYSDK_OFFSET(0xD886180)
#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS_RANDDESIREDMOVESPEED_OFFSET UNITYSDK_OFFSET(0xD8853A0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS_REFRESH_OFFSET UNITYSDK_OFFSET(0xD884DD0)
#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xD887BF0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMovementParameters_TypeDefinitionIndex = 55941;

	class NPCAbilityMovementParameters : public ::System::Object
	{
	public:
		::System::Single MaxSpeed; // 0x10
		::System::Single MaxAcceleration; // 0x14
		::System::Single DesiredSpeed; // 0x18
		::System::Single HeightSmoothingTime; // 0x1C
		::System::Single UpStairSpeed; // 0x20
		::System::Single DownStairSpeed; // 0x24
		::System::Single StairPrepareDistance; // 0x28
		::System::Boolean EnablePhysicsGroundedOnStair; // 0x2C
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCAbilityMovementMoveStyleParameters*>* MovementStyles; // 0x30
		::System::String* DefaultMovementStyle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS_REFRESH_OFFSET))(this);
		}

		::System::Boolean RandDesiredMoveSpeed(::System::String* style, ::System::Int32 idx, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS_RANDDESIREDMOVESPEED_OFFSET))(this, style, idx, result);
		}

		::System::Boolean GetMovementParamByAnimID(::System::Int32 animID, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTPARAMETERS_GETMOVEMENTPARAMBYANIMID_OFFSET))(this, animID, result);
		}
	};
}
