#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGRADIALBLUR_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1C6D89F0)
#define RPG_CUSTOMRP_RPGRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D8B80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGRadialBlur_TypeDefinitionIndex = 37153;

	class RPGRadialBlur : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::UnityEngine::Rendering::FloatParameter* RadialBlurX; // 0x38
		::UnityEngine::Rendering::FloatParameter* RadialBlurY; // 0x40
		::UnityEngine::Rendering::FloatParameter* RadialBlurRadius; // 0x48
		::UnityEngine::Rendering::FloatParameter* RadialIteration; // 0x50
		::UnityEngine::Rendering::FloatParameter* RadialBlurStart; // 0x58
		::UnityEngine::Rendering::FloatParameter* RadialBlurFeather; // 0x60
		::UnityEngine::Rendering::BoolParameter* RadialBlurRounded; // 0x68
		::UnityEngine::Rendering::BoolParameter* EnableDirectionBlur; // 0x70
		::UnityEngine::Rendering::FloatParameter* BlurIteration; // 0x78
		::UnityEngine::Rendering::FloatParameter* BlurRadius; // 0x80
		::UnityEngine::Rendering::FloatParameter* Angle; // 0x88
		::UnityEngine::Rendering::BoolParameter* AvoidBrightnessBug; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLUR_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
