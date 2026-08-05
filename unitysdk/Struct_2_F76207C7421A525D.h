#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Struct_2_F76207C7421A525D_TypeDefinitionIndex = 87349;

struct alignas(4) Struct_2_F76207C7421A525D
{
	::MoleMole::Config::AnimatorGroundHitType Field_2_1; // 0x10
	::MoleMole::Config::AnimatorHitEffect Field_2_0; // 0x14
	::MoleMole::Config::AnimatorAirHitType Field_2_7; // 0x18
	::System::Boolean Field_2_6; // 0x1C
};
