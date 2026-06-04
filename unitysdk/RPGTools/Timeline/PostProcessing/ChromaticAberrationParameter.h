#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x149960)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ChromaticAberrationParameter_TypeDefinitionIndex = 45822;

	struct alignas(4) ChromaticAberrationParameter
	{
		::System::Boolean ChromaticAberrationOverrideState; // 0x10
		::UnityEngine::Color FilterA; // 0x14
		::UnityEngine::Color FilterB; // 0x24
		::UnityEngine::Color FilterC; // 0x34
		::System::Single Intensity; // 0x44

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
