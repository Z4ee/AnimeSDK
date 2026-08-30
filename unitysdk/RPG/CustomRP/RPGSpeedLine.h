#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class RPGSpeedLine_SpeedLineModeParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }

#define RPG_CUSTOMRP_RPGSPEEDLINE_ISACTIVEIMPL_OFFSET UNITYSDK_OFFSET(0x1C6DC5D0)
#define RPG_CUSTOMRP_RPGSPEEDLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DC680)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGSpeedLine_TypeDefinitionIndex = 37157;

	class RPGSpeedLine : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::RPG::CustomRP::RPGSpeedLine_SpeedLineModeParameter* SpeedLineModeMethod; // 0x38
		::UnityEngine::Rendering::ColorParameter* LineColor; // 0x40
		::UnityEngine::Rendering::FloatParameter* Speed; // 0x48
		::UnityEngine::Rendering::BoolParameter* UseTwoTone; // 0x50
		::UnityEngine::Rendering::FloatParameter* WhitePercent; // 0x58
		::UnityEngine::Rendering::TextureParameter* SpeedlineSeed; // 0x60
		::UnityEngine::Rendering::FloatParameter* LineDivide; // 0x68
		::UnityEngine::Rendering::FloatParameter* LineDivideY; // 0x70
		::UnityEngine::Rendering::FloatParameter* LineOffset; // 0x78
		::UnityEngine::Rendering::FloatParameter* LineDensity; // 0x80
		::UnityEngine::Rendering::FloatParameter* PosX; // 0x88
		::UnityEngine::Rendering::FloatParameter* PosY; // 0x90
		::UnityEngine::Rendering::FloatParameter* StartDistance; // 0x98
		::UnityEngine::Rendering::FloatParameter* EndDistance; // 0xA0
		::UnityEngine::Rendering::FloatParameter* SpeedBlurStrength; // 0xA8
		::UnityEngine::Rendering::FloatParameter* LineBrightness; // 0xB0
		::UnityEngine::Rendering::FloatParameter* SpeedlineEdgeSoft; // 0xB8
		::UnityEngine::Rendering::FloatParameter* Rotation; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSPEEDLINE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActiveImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGSPEEDLINE_ISACTIVEIMPL_OFFSET))(this);
		}
	};
}
