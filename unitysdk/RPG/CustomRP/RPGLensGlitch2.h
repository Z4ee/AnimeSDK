#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }

#define RPG_CUSTOMRP_RPGLENSGLITCH2__CTOR_OFFSET UNITYSDK_OFFSET(0x18164EA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitch2_TypeDefinitionIndex = 35199;

	class RPGLensGlitch2 : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::Vector2Parameter* _NoiseTiling; // 0x38
		::UnityEngine::Rendering::Vector2Parameter* _NoiseFlow; // 0x40
		::UnityEngine::Rendering::FloatParameter* _DistortIntensity; // 0x48
		::UnityEngine::Rendering::FloatParameter* _NoiseAnimSpeed; // 0x50
		::UnityEngine::Rendering::BoolParameter* _UsePolarCoord; // 0x58
		::UnityEngine::Rendering::BoolParameter* _UseBlockGlitch; // 0x60
		::UnityEngine::Rendering::FloatParameter* _CenterX; // 0x68
		::UnityEngine::Rendering::FloatParameter* _CenterY; // 0x70
		::UnityEngine::Rendering::FloatParameter* _StartRadius; // 0x78
		::UnityEngine::Rendering::FloatParameter* _BlendRadius; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2__CTOR_OFFSET))(this);
		}
	};
}
