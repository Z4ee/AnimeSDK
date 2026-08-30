#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGBLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x18585F30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGBlink_TypeDefinitionIndex = 37101;

	class RPGBlink : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* BlinkDuration; // 0x38
		::UnityEngine::Rendering::FloatParameter* BlinkOffset; // 0x40
		::UnityEngine::Rendering::ColorParameter* BlinkMaskColor; // 0x48
		::UnityEngine::Rendering::FloatParameter* ChinkScale; // 0x50
		::UnityEngine::Rendering::FloatParameter* Dist; // 0x58
		::UnityEngine::Rendering::FloatParameter* Radii; // 0x60
		::UnityEngine::Rendering::FloatParameter* Aspect; // 0x68
		::UnityEngine::Rendering::FloatParameter* DownScale; // 0x70
		::UnityEngine::Rendering::FloatParameter* SmoothRange; // 0x78
		::UnityEngine::Rendering::FloatParameter* Rotation; // 0x80
		::UnityEngine::Rendering::FloatParameter* DistortStrength; // 0x88
		::UnityEngine::Rendering::FloatParameter* DistortFreq; // 0x90
		::UnityEngine::Rendering::BoolParameter* BlinkReverse; // 0x98
		::UnityEngine::Rendering::BoolParameter* EnableBlinkSpeedline; // 0xA0
		::UnityEngine::Rendering::FloatParameter* BlinkSpeedlineSpeed; // 0xA8
		::UnityEngine::Rendering::FloatParameter* BlinkSpeedlineRange; // 0xB0
		::UnityEngine::Rendering::FloatParameter* BlinkSpeedlineLength; // 0xB8
		::UnityEngine::Rendering::FloatParameter* BlinkSpeedlineWidth; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGBLINK__CTOR_OFFSET))(this);
		}
	};
}
