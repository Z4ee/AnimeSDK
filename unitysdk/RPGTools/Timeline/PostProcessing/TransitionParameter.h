#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8AFA0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONPARAMETER_METHOD_2_A86D5792F2D697F7_OFFSET UNITYSDK_OFFSET(0xAB91FA0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int TransitionParameter_TypeDefinitionIndex = 39427;

	struct alignas(4) TransitionParameter
	{
		::System::Single Offset; // 0x10
		::UnityEngine::Color Color; // 0x14
		::System::Single Dist; // 0x24
		::System::Single Radii; // 0x28
		::System::Single Chick; // 0x2C
		::System::Single Aspect; // 0x30
		::System::Single DownScale; // 0x34
		::System::Single SmoothRange; // 0x38
		::System::Single Rotation; // 0x3C
		::System::Single DistortStrength; // 0x40
		::System::Single DistortFreq; // 0x44
		::System::Boolean IsActive; // 0x48

		static ::RPGTools::Timeline::PostProcessing::TransitionParameter Method_2_A86D5792F2D697F7(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::TransitionParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONPARAMETER_METHOD_2_A86D5792F2D697F7_OFFSET))(a1);
		}

		::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONPARAMETER_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
