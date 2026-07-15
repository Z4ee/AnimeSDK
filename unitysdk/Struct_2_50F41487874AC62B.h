#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

inline static constexpr unsigned int Struct_2_50F41487874AC62B_TypeDefinitionIndex = 45325;

struct alignas(8) Struct_2_50F41487874AC62B
{
	::RPG::GameCore::VCameraBlendType Field_2_0; // 0x10
	::UnityEngine::AnimationCurve* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
};
