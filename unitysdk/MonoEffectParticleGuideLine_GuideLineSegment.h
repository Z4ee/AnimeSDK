#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MONOEFFECTPARTICLEGUIDELINE_GUIDELINESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x6D8F60)

inline static constexpr unsigned int MonoEffectParticleGuideLine_GuideLineSegment_TypeDefinitionIndex = 85118;

struct alignas(4) MonoEffectParticleGuideLine_GuideLineSegment
{
	::UnityEngine::Vector3 startPos; // 0x10
	::UnityEngine::Vector3 endPos; // 0x1C
	::UnityEngine::Vector3 dir; // 0x28
	::System::Single length; // 0x34
	::System::Single startPercent; // 0x38
	::System::Single endPercent; // 0x3C
	::System::Single segmentPercent; // 0x40

	::System::Void _ctor(::UnityEngine::Vector3 s, ::UnityEngine::Vector3 e)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_GUIDELINESEGMENT__CTOR_OFFSET))(this, s, e);
	}
};
