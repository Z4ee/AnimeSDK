#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_ValueMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define FLOATCURVEBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x182E48D0)

inline static constexpr unsigned int FloatCurveBundle_TypeDefinitionIndex = 33893;

class FloatCurveBundle : public ::System::Object
{
public:
	::RefGPUParticleSystem_ValueMode mode; // 0x10
	::System::Single value1; // 0x14
	::System::Single value2; // 0x18
	::UnityEngine::AnimationCurve* curve1; // 0x20
	::UnityEngine::AnimationCurve* curve2; // 0x28
	::UnityEngine::Vector2 minMax; // 0x30
	::System::Single seed; // 0x38

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOATCURVEBUNDLE__CTOR_OFFSET))(this, a1, a2);
	}
};
