#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_SimpleValueMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define SINGLEFLOATCURVEBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC65FA0)

inline static constexpr unsigned int SingleFloatCurveBundle_TypeDefinitionIndex = 41335;

class SingleFloatCurveBundle : public ::System::Object
{
public:
	::RefGPUParticleSystem_SimpleValueMode mode; // 0x10
	::System::Single value; // 0x14
	::UnityEngine::AnimationCurve* curve; // 0x18
	::UnityEngine::Vector2 minMax; // 0x20
	::System::Single seed; // 0x28

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SINGLEFLOATCURVEBUNDLE__CTOR_OFFSET))(this, a1);
	}
};
