#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class ToneMappingMethodParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }

#define RPG_CUSTOMRP_RPGTONEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DCCD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGTonemapping_TypeDefinitionIndex = 37163;

	class RPGTonemapping : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::RPG::CustomRP::ToneMappingMethodParameter* Tonemapping; // 0x38
		::UnityEngine::Rendering::FloatParameter* BlueCorrection; // 0x40
		::UnityEngine::Rendering::FloatParameter* ExpandGamut; // 0x48
		::UnityEngine::Rendering::BoolParameter* ForceDisableToneMapping; // 0x50
		::UnityEngine::Rendering::FloatParameter* Slope; // 0x58
		::UnityEngine::Rendering::FloatParameter* Toe; // 0x60
		::UnityEngine::Rendering::FloatParameter* Shoulder; // 0x68
		::UnityEngine::Rendering::FloatParameter* BlackClip; // 0x70
		::UnityEngine::Rendering::FloatParameter* WhiteClip; // 0x78
		::UnityEngine::Rendering::FloatParameter* ToneCurveToeStrength; // 0x80
		::UnityEngine::Rendering::FloatParameter* ToneCurveToeLength; // 0x88
		::UnityEngine::Rendering::FloatParameter* ToneCurveShoulderStrength; // 0x90
		::UnityEngine::Rendering::FloatParameter* ToneCurveShoulderLength; // 0x98
		::UnityEngine::Rendering::FloatParameter* ToneCurveShoulderAngle; // 0xA0
		::UnityEngine::Rendering::FloatParameter* ToneCurveGamma; // 0xA8
		::UnityEngine::Rendering::FloatParameter* ACES_A; // 0xB0
		::UnityEngine::Rendering::FloatParameter* ACES_B; // 0xB8
		::UnityEngine::Rendering::FloatParameter* ACES_C; // 0xC0
		::UnityEngine::Rendering::FloatParameter* ACES_D; // 0xC8
		::UnityEngine::Rendering::FloatParameter* ACES_E; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGTONEMAPPING__CTOR_OFFSET))(this);
		}
	};
}
