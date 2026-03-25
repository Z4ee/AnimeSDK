#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACE0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RadialBlurParameter_TypeDefinitionIndex = 39401;

	struct alignas(4) RadialBlurParameter
	{
		::System::Boolean RadialBlurMethodOverrideState; // 0x10
		::System::Single RadialBlurX; // 0x14
		::System::Single RadialBlurY; // 0x18
		::System::Single RadialBlurRadius; // 0x1C
		::System::Single RadialIteration; // 0x20
		::System::Single RadialBlurStart; // 0x24
		::System::Single RadialBlurFeather; // 0x28

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RADIALBLURPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
