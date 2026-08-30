#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

inline static constexpr unsigned int Struct_2_BCBF66BD154C22AC_TypeDefinitionIndex = 68462;

struct alignas(8) Struct_2_BCBF66BD154C22AC
{
	::RootMotion::IKJob::IKTransformRef IFIPFPBJJBM; // 0x10
	::UnityEngine::Quaternion LIBHAIADKPD; // 0x20
	::UnityEngine::Vector3 IBGNPPGLPOP; // 0x30
	::UnityEngine::Quaternion FEHPOGEELBK; // 0x3C
	::UnityEngine::Vector3 HCHLJCNFMAP; // 0x4C
	::System::Single ICGEFMFJHNP; // 0x58
	::UnityEngine::AnimationCurve* CIFNCBBOHNG; // 0x60
	::System::Boolean BBIGBBDILLG; // 0x68
	::System::Boolean IODLHGBHHBE; // 0x69
};
