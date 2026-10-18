#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGBloom; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace RPG::CustomRP { class RPGFXAA; }
namespace RPG::CustomRP { class RPGGaussianBlur; }
namespace RPG::CustomRP { class RPGLensDistortion; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace RPG::CustomRP { class RPGLensGlitch; }
namespace RPG::CustomRP { class RPGMotionBlur; }
namespace RPG::CustomRP { class RPGPPPattern; }
namespace RPG::CustomRP { class RPGPolaroid; }
namespace RPG::CustomRP { class RPGRadialBlur; }
namespace RPG::CustomRP { class RPGSkillRadialBlur; }
namespace RPG::CustomRP { class RPGSpeedLine; }
namespace RPG::CustomRP { class RPGTemporalAntialiasing; }
namespace RPG::CustomRP { class RPGTonemapping; }
namespace RPG::CustomRP { class RPGVignette; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSSETTINGS_RESET_OFFSET UNITYSDK_OFFSET(0x1CBF50E0)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSSETTINGS_SETUP_OFFSET UNITYSDK_OFFSET(0x1CBF4F10)
#define RPG_CUSTOMRP_CUSTOMPOSTPROCESSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF4F00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessSettings_TypeDefinitionIndex = 37774;

	class CustomPostProcessSettings : public ::System::Object
	{
	public:
		::RPG::CustomRP::RPGBlink* blink; // 0x10
		::RPG::CustomRP::RPGRadialBlur* directionBlur; // 0x18
		::RPG::CustomRP::RPGLensDistortion* lensDistortion; // 0x20
		::RPG::CustomRP::RPGChromaticAberration* chromaticAberration; // 0x28
		::RPG::CustomRP::RPGFXAA* fxaa; // 0x30
		::RPG::CustomRP::RPGMotionBlur* motionBlur; // 0x38
		::RPG::CustomRP::RPGPPPattern* ppPattern; // 0x40
		::RPG::CustomRP::RPGAdditionalColorGrading* additionalColorGrading; // 0x48
		::RPG::CustomRP::RPGLensGlitch* ppLensGlitch; // 0x50
		::RPG::CustomRP::RPGDepthOfField* dof; // 0x58
		::RPG::CustomRP::RPGGaussianBlur* gaussianBlur; // 0x60
		::RPG::CustomRP::RPGTonemapping* toneMapping; // 0x68
		::RPG::CustomRP::RPGSpeedLine* speedLine; // 0x70
		::RPG::CustomRP::RPGTemporalAntialiasing* taa; // 0x78
		::RPG::CustomRP::RPGBloom* bloom; // 0x80
		::RPG::CustomRP::RPGPolaroid* polaroid; // 0x88
		::RPG::CustomRP::RPGVignette* vignette; // 0x90
		::RPG::CustomRP::RPGColorGrading* colorGrading; // 0x98
		::RPG::CustomRP::RPGLensGlitch2* ppLensGlitch2; // 0xA0
		::RPG::CustomRP::RPGRadialBlur* radialBlur; // 0xA8
		::RPG::CustomRP::RPGSkillRadialBlur* skillRadialBlur; // 0xB0
		::UnityEngine::RenderTextureDescriptor sharedDesc; // 0xB8
		::System::Single cameraAspect; // 0xE8
		::System::Int32 cameraPixelHeight; // 0xEC
		::System::Single cameraFar; // 0xF0
		::System::Boolean targetTextureIsNull; // 0xF4
		::System::Boolean finalRenderToTexture; // 0xF5
		::System::Boolean isTAAEnable; // 0xF6
		::System::Boolean isUI3DCameraEnable; // 0xF7
		::System::Single cameraRenderScale; // 0xF8
		::System::Single cameraNear; // 0xFC
		::UnityEngine::Vector3 cameraForward; // 0x100
		::RPG::CustomRP::GameCameraType cameraType; // 0x10C
		::System::Boolean isPostProcessEnable; // 0x110
		::System::Single cameraFov; // 0x114
		::System::Int32 cameraPixelWidth; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSSETTINGS_RESET_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::VolumeStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeStack*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMPOSTPROCESSSETTINGS_SETUP_OFFSET))(this, a1);
		}
	};
}
