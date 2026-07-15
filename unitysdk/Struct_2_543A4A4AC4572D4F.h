#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

inline static constexpr unsigned int Struct_2_543A4A4AC4572D4F_TypeDefinitionIndex = 65447;

struct alignas(8) Struct_2_543A4A4AC4572D4F
{
	::UnityEngine::Quaternion Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::UnityEngine::AnimationCurve* Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38
};
