#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_SKILLRADIALBLURPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE50)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int SkillRadialBlurParameter_TypeDefinitionIndex = 39414;

	struct alignas(4) SkillRadialBlurParameter
	{
		::System::Boolean SkillRadialBlurMethodOverrideState; // 0x10
		::System::Single BlurRadius; // 0x14
		::System::Single Angle; // 0x18
		::System::Single Bias; // 0x1C
		::System::Single Falloff; // 0x20
		::System::Boolean UseRadial; // 0x24
		::UnityEngine::Vector2 RadialCenter; // 0x28

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_SKILLRADIALBLURPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
