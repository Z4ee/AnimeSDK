#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

inline static constexpr unsigned int Struct_2_BCBF66BD154C22AC_TypeDefinitionIndex = 65448;

struct alignas(8) Struct_2_BCBF66BD154C22AC
{
	::RootMotion::IKJob::IKTransformRef Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_2; // 0x30
	::UnityEngine::Quaternion Field_2_3; // 0x3C
	::UnityEngine::Vector3 Field_2_4; // 0x4C
	::System::Single Field_2_5; // 0x58
	::UnityEngine::AnimationCurve* Field_2_6; // 0x60
	::System::Boolean Field_2_7; // 0x68
	::System::Boolean Field_2_8; // 0x69
};
