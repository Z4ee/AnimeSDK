#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x14A630)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ToneMappingParameter_TypeDefinitionIndex = 45889;

	struct alignas(4) ToneMappingParameter
	{
		::System::Single ToeStrength; // 0x10
		::System::Single ToeLength; // 0x14
		::System::Single ShoulderStrength; // 0x18
		::System::Single ShoulderLength; // 0x1C
		::System::Single ShoulderAngle; // 0x20
		::System::Single Gamma; // 0x24

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TONEMAPPINGPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}
