#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define RPG_CUSTOMRP_RPGLENSGLITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x185A2F80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitch_TypeDefinitionIndex = 37138;

	class RPGLensGlitch : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::Vector2Parameter* _RainDropTilling; // 0x38
		::UnityEngine::Rendering::FloatParameter* _RainDropVelocity; // 0x40
		::UnityEngine::Rendering::FloatParameter* _RainDropCount; // 0x48
		::UnityEngine::Rendering::FloatParameter* _RainDropStrength; // 0x50
		::UnityEngine::Rendering::Vector2Parameter* _RainMaskCenter; // 0x58
		::UnityEngine::Rendering::FloatParameter* _RainMaskRadius; // 0x60
		::UnityEngine::Rendering::FloatParameter* _RainMaskBlur; // 0x68
		::UnityEngine::Rendering::FloatParameter* _RainDistortStrength; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH__CTOR_OFFSET))(this);
		}
	};
}
