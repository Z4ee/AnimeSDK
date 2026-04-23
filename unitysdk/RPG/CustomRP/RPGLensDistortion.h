#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class MaskTypeParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class TextureParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }
namespace UnityEngine::Rendering { class Vector4Parameter; }

#define RPG_CUSTOMRP_RPGLENSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18162530)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensDistortion_TypeDefinitionIndex = 35192;

	class RPGLensDistortion : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::RPG::CustomRP::MaskTypeParameter* MaskTypeParam; // 0x38
		::UnityEngine::Rendering::FloatParameter* Instensity; // 0x40
		::UnityEngine::Rendering::FloatParameter* XMultiplier; // 0x48
		::UnityEngine::Rendering::FloatParameter* YMultiplier; // 0x50
		::UnityEngine::Rendering::BoolParameter* MirrorFlip; // 0x58
		::UnityEngine::Rendering::FloatParameter* Scale; // 0x60
		::UnityEngine::Rendering::Vector2Parameter* Center; // 0x68
		::UnityEngine::Rendering::TextureParameter* DistorionTexture; // 0x70
		::UnityEngine::Rendering::Vector4Parameter* LensDisTexTilingOffset; // 0x78
		::UnityEngine::Rendering::FloatParameter* DistortionTextureStrength; // 0x80
		::UnityEngine::Rendering::Vector2Parameter* CircleCenterOffset; // 0x88
		::UnityEngine::Rendering::FloatParameter* StartRadius; // 0x90
		::UnityEngine::Rendering::FloatParameter* BlendRadius; // 0x98
		::UnityEngine::Rendering::FloatParameter* Angle; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSDISTORTION__CTOR_OFFSET))(this);
		}
	};
}
