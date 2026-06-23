#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AttackPatternMorphBase.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35D520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWaveMorphParam_TypeDefinitionIndex = 51149;

	class ConfigWaveMorphParam : public ::MoleMole::Config::AttackPatternMorphBase
	{
	public:
		::UnityEngine::AnimationCurve* outerRadiusCurve; // 0x10
		::UnityEngine::AnimationCurve* innerRadiusCurve; // 0x18
		::System::Single innerRadius; // 0x20
		::System::Single outRadius; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWAVEMORPHPARAM__CTOR_OFFSET))(this);
		}
	};
}
