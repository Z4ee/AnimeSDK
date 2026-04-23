#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define CONSTELLATIONEFFECTGROUP_CONSTELLATIONLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD13510)

inline static constexpr unsigned int ConstellationEffectGroup_ConstellationLine_TypeDefinitionIndex = 44114;

class ConstellationEffectGroup_ConstellationLine : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* LineWidthCurve; // 0x10
	::UnityEngine::Gradient* LineColorGradient; // 0x18
	::System::Int32 DivitionCount; // 0x20
	::System::Int32 StartStarID; // 0x24
	::System::Int32 EndStarID; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_CONSTELLATIONLINE__CTOR_OFFSET))(this);
	}
};
