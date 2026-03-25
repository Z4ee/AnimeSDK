#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"

class Class_1_92B0B8C84327961B;

#define CLASS_1_0D8B762DCE2B2E43___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1665BFC0)
#define CLASS_1_0D8B762DCE2B2E43___C__DISPLAYCLASS5_0__GETCAKERACECORECYCLEABILITY_B__0_OFFSET UNITYSDK_OFFSET(0x1665E810)

inline static constexpr unsigned int Class_1_0D8B762DCE2B2E43___c__DisplayClass5_0_TypeDefinitionIndex = 28939;

class Class_1_0D8B762DCE2B2E43___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::GameCore::CakeRaceAbilityName abilityType; // 0x10
	::System::Int32 entityRuntimeID; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetCakeRaceCoreCycleAbility_b__0(::Class_1_92B0B8C84327961B* ability)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_92B0B8C84327961B*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43___C__DISPLAYCLASS5_0__GETCAKERACECORECYCLEABILITY_B__0_OFFSET))(this, ability);
	}
};
