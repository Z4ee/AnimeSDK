#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class AnimationCurve; }

inline static constexpr unsigned int Struct_2_06297BD58B1627CC_TypeDefinitionIndex = 40349;

struct alignas(8) Struct_2_06297BD58B1627CC
{
	::UnityEngine::Quaternion Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x30
	::UnityEngine::AnimationCurve* Field_2_3; // 0x38
};
