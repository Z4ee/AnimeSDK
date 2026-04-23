#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_DepthOfFieldDebugMethod.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP { class RPGDepthOfField; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFEFFECTPARAMETER_METHOD_2_B99D15A384F8B33C_OFFSET UNITYSDK_OFFSET(0xE4730)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFEffectParameter_TypeDefinitionIndex = 45277;

	struct alignas(4) DOFEffectParameter
	{
		::RPG::CustomRP::RPGDepthOfField_DepthOfFieldDebugMethod debugMode; // 0x10
		::System::Single FocusDistance; // 0x14
		::System::Single FStop; // 0x18
		::System::Single SensorWidth; // 0x1C

		::System::Void Method_2_B99D15A384F8B33C(::RPG::CustomRP::RPGDepthOfField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFEFFECTPARAMETER_METHOD_2_B99D15A384F8B33C_OFFSET))(this, a1);
		}
	};
}
