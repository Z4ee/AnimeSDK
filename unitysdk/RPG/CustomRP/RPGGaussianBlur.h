#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class GaussianBlurGradualParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class IntParameter; }

#define RPG_CUSTOMRP_RPGGAUSSIANBLUR_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x16C0F370)
#define RPG_CUSTOMRP_RPGGAUSSIANBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0F3F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGGaussianBlur_TypeDefinitionIndex = 36270;

	class RPGGaussianBlur : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::IntParameter* GlobalGaussianKernelLength; // 0x38
		::UnityEngine::Rendering::FloatParameter* GlobalGaussianSigma; // 0x40
		::UnityEngine::Rendering::FloatParameter* BlurScale; // 0x48
		::UnityEngine::Rendering::BoolParameter* Lighten; // 0x50
		::UnityEngine::Rendering::FloatParameter* LightenIntensity; // 0x58
		::RPG::CustomRP::GaussianBlurGradualParameter* GaussianBlurGradualParam; // 0x60
		::UnityEngine::Rendering::FloatParameter* CenterX; // 0x68
		::UnityEngine::Rendering::FloatParameter* CenterY; // 0x70
		::UnityEngine::Rendering::FloatParameter* StartRadius; // 0x78
		::UnityEngine::Rendering::FloatParameter* BlendRadius; // 0x80
		::UnityEngine::Rendering::FloatParameter* Angle; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGGAUSSIANBLUR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGGAUSSIANBLUR_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
