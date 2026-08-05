#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoEffectParticleGuideLine_GuideLineSegment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MONOEFFECTPARTICLEGUIDELINE_GUIDELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1353DE90)

inline static constexpr unsigned int MonoEffectParticleGuideLine_GuideLineData_TypeDefinitionIndex = 85116;

class MonoEffectParticleGuideLine_GuideLineData : public ::System::Object
{
public:
	::Il2CppArray<::MonoEffectParticleGuideLine_GuideLineSegment>* segments; // 0x10
	::System::Single sumLength; // 0x18

	::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector3>* testGuideLines)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOEFFECTPARTICLEGUIDELINE_GUIDELINEDATA__CTOR_OFFSET))(this, testGuideLines);
	}
};
