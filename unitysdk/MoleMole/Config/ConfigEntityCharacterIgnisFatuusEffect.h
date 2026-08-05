#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSACTIVE_OFFSET UNITYSDK_OFFSET(0x1B906020)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSBLURPOW2_OFFSET UNITYSDK_OFFSET(0x1B9074A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSBLURPOW_OFFSET UNITYSDK_OFFSET(0x1B906B30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLOR2_OFFSET UNITYSDK_OFFSET(0x1B906C30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1B9061E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORDISTORTIONINTENSITY2_OFFSET UNITYSDK_OFFSET(0x1B907520)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B906BB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTURE2_OFFSET UNITYSDK_OFFSET(0x1B906ED0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSCALE2_OFFSET UNITYSDK_OFFSET(0x1B906F40)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSCALE_OFFSET UNITYSDK_OFFSET(0x1B9065C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSPEED2_OFFSET UNITYSDK_OFFSET(0x1B906FC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSPEED_OFFSET UNITYSDK_OFFSET(0x1B906640)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B906550)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLOR_OFFSET UNITYSDK_OFFSET(0x1B9062C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDEPTHMASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1B906170)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISAPPEAREND_OFFSET UNITYSDK_OFFSET(0x1B907720)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISAPPEARSTART_OFFSET UNITYSDK_OFFSET(0x1B9076A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONINTENSITY2_OFFSET UNITYSDK_OFFSET(0x1B9073A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1B906A30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONOFFSET2_OFFSET UNITYSDK_OFFSET(0x1B907420)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1B906AB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B906090)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSFADEIN_OFFSET UNITYSDK_OFFSET(0x1B9077A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B907820)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTURE2_OFFSET UNITYSDK_OFFSET(0x1B907230)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSCALE2_OFFSET UNITYSDK_OFFSET(0x1B9072A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSCALE_OFFSET UNITYSDK_OFFSET(0x1B906930)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSPEED2_OFFSET UNITYSDK_OFFSET(0x1B907320)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSPEED_OFFSET UNITYSDK_OFFSET(0x1B9069B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B9068C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSSELFMASK_OFFSET UNITYSDK_OFFSET(0x1B906100)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSSOFTEDGEPOW_OFFSET UNITYSDK_OFFSET(0x1B9075A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSSOFTEDGERANGE_OFFSET UNITYSDK_OFFSET(0x1B907620)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETUSEIGNISFATUUSCOLORTEXTUREALPHA_OFFSET UNITYSDK_OFFSET(0x1B906250)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSCOLORTEXTURE2_OFFSET UNITYSDK_OFFSET(0x1B906CD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSCOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B906360)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSNOISETEXTURE2_OFFSET UNITYSDK_OFFSET(0x1B907040)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSNOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1B9066C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9078A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCharacterIgnisFatuusEffect_TypeDefinitionIndex = 86889;

	class ConfigEntityCharacterIgnisFatuusEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusDisappearStart; // 0x40
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusColorTextureUVSpeed; // 0x48
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusColorDistortionIntensity; // 0x50
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusNoiseTextureUVScale; // 0x58
		::UnityEngine::Texture2D* _characterIgnisFatuusColorTexture; // 0x60
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusColorDistortionIntensity2; // 0x68
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusFadeOut; // 0x70
		::UnityEngine::Texture2D* _characterIgnisFatuusNoiseTexture2; // 0x78
		::UnityEngine::Texture2D* _characterIgnisFatuusColorTexture2; // 0x80
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusSoftEdgePow; // 0x88
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusNoiseTextureUVSpeed; // 0x90
		::MoleMole::Config::ScreenEffectColor* characterIgnisFatuusColor2; // 0x98
		::System::String* characterIgnisFatuusNoiseTexture2Path; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusBlurPow; // 0xA8
		::MoleMole::Config::ScreenEffectColor* characterIgnisFatuusColor; // 0xB0
		::UnityEngine::Texture2D* _characterIgnisFatuusNoiseTexture; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusFadeIn; // 0xC0
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusNoiseTextureUVScale2; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusDisappearEnd; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusDistortionOffset; // 0xD8
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusSoftEdgeRange; // 0xE0
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusColorTextureUVScale; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusDistortionOffset2; // 0xF0
		::System::String* characterIgnisFatuusNoiseTexturePath; // 0xF8
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusDistortionIntensity; // 0x100
		::System::String* characterIgnisFatuusColorTexture2Path; // 0x108
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusDistortionIntensity2; // 0x110
		::System::String* characterIgnisFatuusColorTexturePath; // 0x118
		::MoleMole::Config::ScreenEffectFloat* characterIgnisFatuusBlurPow2; // 0x120
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusColorTextureUVScale2; // 0x128
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusNoiseTextureUVSpeed2; // 0x130
		::MoleMole::Config::ScreenEffectVector2* characterIgnisFatuusColorTextureUVSpeed2; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDownSampleHandleType; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusNoiseTexture2HandleType; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusBlurPowHandleType; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusNoiseTextureUVScale2HandleType; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusBlurPow2HandleType; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorTextureUVSpeedHandleType; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusNoiseTextureUVScaleHandleType; // 0x158
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDisappearEndHandleType; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorDistortionIntensityHandleType; // 0x160
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorTextureUVScale2HandleType; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDistortionOffsetHandleType; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusActiveHandleType; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusNoiseTextureUVSpeed2HandleType; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusNoiseTextureUVSpeedHandleType; // 0x174
		::System::Boolean characterIgnisFatuusSelfMask; // 0x178
		::System::Boolean useIgnisFatuusColorTextureAlpha; // 0x179
		::System::Boolean characterIgnisFatuusActive; // 0x17A
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorTextureUVScaleHandleType; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusSelfMaskHandleType; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusFadeOutHandleType; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorTextureHandleType; // 0x188
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDisappearStartHandleType; // 0x18C
		::System::Int32 characterIgnisFatuusDownSample; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorTextureUVSpeed2HandleType; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorHandleType; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusNoiseTextureHandleType; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorTexture2HandleType; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType useIgnisFatuusColorTextureAlphaHandleType; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDistortionOffset2HandleType; // 0x1A8
		::UnityEngine::Rendering::Universal::BlendModes characterIgnisFatuusColorBlendMode; // 0x1AC
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDistortionIntensity2HandleType; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDistortionIntensityHandleType; // 0x1B4
		::System::Single characterIgnisFatuusDepthMaskOffset; // 0x1B8
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorDistortionIntensity2HandleType; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusSoftEdgeRangeHandleType; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusSoftEdgePowHandleType; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusDepthMaskOffsetHandleType; // 0x1C8
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusFadeInHandleType; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColor2HandleType; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType characterIgnisFatuusColorBlendModeHandleType; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetCharacterIgnisFatuusActive(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSACTIVE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetCharacterIgnisFatuusDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterIgnisFatuusSelfMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSSELFMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDepthMaskOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDEPTHMASKOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::BlendModes GetCharacterIgnisFatuusColorBlendMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::BlendModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORBLENDMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseIgnisFatuusColorTextureAlpha(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETUSEIGNISFATUUSCOLORTEXTUREALPHA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetCharacterIgnisFatuusColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_characterIgnisFatuusColorTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSCOLORTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetCharacterIgnisFatuusColorTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusColorTextureUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusColorTextureUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_characterIgnisFatuusNoiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSNOISETEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetCharacterIgnisFatuusNoiseTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusNoiseTextureUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusNoiseTextureUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDistortionOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusBlurPow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSBLURPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusColorDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetCharacterIgnisFatuusColor2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLOR2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_characterIgnisFatuusColorTexture2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSCOLORTEXTURE2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetCharacterIgnisFatuusColorTexture2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTURE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusColorTextureUVScale2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSCALE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusColorTextureUVSpeed2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORTEXTUREUVSPEED2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_characterIgnisFatuusNoiseTexture2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GET_CHARACTERIGNISFATUUSNOISETEXTURE2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetCharacterIgnisFatuusNoiseTexture2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTURE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusNoiseTextureUVScale2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSCALE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterIgnisFatuusNoiseTextureUVSpeed2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSNOISETEXTUREUVSPEED2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDistortionIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDistortionOffset2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISTORTIONOFFSET2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusBlurPow2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSBLURPOW2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusColorDistortionIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSCOLORDISTORTIONINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusSoftEdgePow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSSOFTEDGEPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusSoftEdgeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSSOFTEDGERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDisappearStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISAPPEARSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusDisappearEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSDISAPPEAREND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusFadeIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSFADEIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterIgnisFatuusFadeOut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCHARACTERIGNISFATUUSEFFECT_GETCHARACTERIGNISFATUUSFADEOUT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
