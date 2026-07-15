#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RefGPUParticleSystem_ValueMode.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define INTCURVEBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC50F80)

inline static constexpr unsigned int IntCurveBundle_TypeDefinitionIndex = 41333;

class IntCurveBundle : public ::System::Object
{
public:
	::RefGPUParticleSystem_ValueMode mode; // 0x10
	::System::Int32 value1; // 0x14
	::System::Int32 value2; // 0x18
	::UnityEngine::AnimationCurve* curve1; // 0x20
	::UnityEngine::AnimationCurve* curve2; // 0x28
	::System::Single seed; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTCURVEBUNDLE__CTOR_OFFSET))(this);
	}
};
