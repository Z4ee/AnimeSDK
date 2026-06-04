#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPPARAMETER_METHOD_2_8B323DFEC7527767_OFFSET UNITYSDK_OFFSET(0xD045590)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPPARAMETER_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x14A4B0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RaindropParameter_TypeDefinitionIndex = 45872;

	struct alignas(4) RaindropParameter
	{
		::UnityEngine::Vector2 _RainDropTilling; // 0x10
		::System::Single _RainDropVelocity; // 0x18
		::System::Single _RainDropCount; // 0x1C
		::System::Single _RainDropStrength; // 0x20
		::UnityEngine::Vector2 _RainMaskCenter; // 0x24
		::System::Single _RainMaskRadius; // 0x2C
		::System::Single _RainMaskBlur; // 0x30
		::System::Single _RainDistortStrength; // 0x34
		::System::Boolean IsActive; // 0x38

		static ::RPGTools::Timeline::PostProcessing::RaindropParameter Method_2_8B323DFEC7527767(::System::Boolean a1)
		{
			return ((::RPGTools::Timeline::PostProcessing::RaindropParameter(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPPARAMETER_METHOD_2_8B323DFEC7527767_OFFSET))(a1);
		}

		::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPPARAMETER_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
		}
	};
}
