#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"

class Class_1_92B0B8C84327961B;

#define CLASS_1_92BF2EC1F75CF80D___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C088240)
#define CLASS_1_92BF2EC1F75CF80D___C__DISPLAYCLASS5_0__GETCAKERACECORECYCLEABILITY_B__0_OFFSET UNITYSDK_OFFSET(0x1C08AB40)

inline static constexpr unsigned int Class_1_92BF2EC1F75CF80D___c__DisplayClass5_0_TypeDefinitionIndex = 36599;

class Class_1_92BF2EC1F75CF80D___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Int32 entityRuntimeID; // 0x10
	::RPG::GameCore::CakeRaceAbilityName abilityType; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetCakeRaceCoreCycleAbility_b__0(::Class_1_92B0B8C84327961B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_92B0B8C84327961B*))((::PBYTE)hIl2Cpp + CLASS_1_92BF2EC1F75CF80D___C__DISPLAYCLASS5_0__GETCAKERACECORECYCLEABILITY_B__0_OFFSET))(this, a1);
	}
};
