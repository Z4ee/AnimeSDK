#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DepthOfFieldDebugMethod.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFEFFECTPARAMETER_METHOD_2_09A78223DBE4A2A6_OFFSET UNITYSDK_OFFSET(0x3B77C50)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFEffectParameter_TypeDefinitionIndex = 49019;

	struct alignas(4) DOFEffectParameter
	{
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethod debugMode; // 0x10
		::System::Single FocusDistance; // 0x14
		::System::Single FStop; // 0x18
		::System::Single SensorWidth; // 0x1C

		::System::Void Method_2_09A78223DBE4A2A6(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFEFFECTPARAMETER_METHOD_2_09A78223DBE4A2A6_OFFSET))(this, a1);
		}
	};
}
