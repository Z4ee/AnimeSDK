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

#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSACTIVE_OFFSET UNITYSDK_OFFSET(0x17533C40)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW2_OFFSET UNITYSDK_OFFSET(0x175350D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW_OFFSET UNITYSDK_OFFSET(0x17534750)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR2_OFFSET UNITYSDK_OFFSET(0x17534850)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORBLENDMODE_OFFSET UNITYSDK_OFFSET(0x17533E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY2_OFFSET UNITYSDK_OFFSET(0x17535150)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x175347D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET UNITYSDK_OFFSET(0x17534AF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE2_OFFSET UNITYSDK_OFFSET(0x17534B60)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE_OFFSET UNITYSDK_OFFSET(0x175341F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED2_OFFSET UNITYSDK_OFFSET(0x17534BE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED_OFFSET UNITYSDK_OFFSET(0x17534270)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x17534180)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR_OFFSET UNITYSDK_OFFSET(0x17533EE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDEPTHMASKOFFSET_OFFSET UNITYSDK_OFFSET(0x17533D90)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEAREND_OFFSET UNITYSDK_OFFSET(0x17535350)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEARSTART_OFFSET UNITYSDK_OFFSET(0x175352D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY2_OFFSET UNITYSDK_OFFSET(0x17534FD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x17534650)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET2_OFFSET UNITYSDK_OFFSET(0x17535050)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET_OFFSET UNITYSDK_OFFSET(0x175346D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x17533CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEIN_OFFSET UNITYSDK_OFFSET(0x175353D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEOUT_OFFSET UNITYSDK_OFFSET(0x17535450)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE2_OFFSET UNITYSDK_OFFSET(0x17534E60)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE2_OFFSET UNITYSDK_OFFSET(0x17534ED0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE_OFFSET UNITYSDK_OFFSET(0x17534550)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED2_OFFSET UNITYSDK_OFFSET(0x17534F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED_OFFSET UNITYSDK_OFFSET(0x175345D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x175344E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSELFMASK_OFFSET UNITYSDK_OFFSET(0x17533D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGEPOW_OFFSET UNITYSDK_OFFSET(0x175351D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGERANGE_OFFSET UNITYSDK_OFFSET(0x17535250)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETUSEMONSTERIGNISFATUUSCOLORTEXTUREALPHA_OFFSET UNITYSDK_OFFSET(0x17533E70)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET UNITYSDK_OFFSET(0x175348F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE_OFFSET UNITYSDK_OFFSET(0x17533F80)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE2_OFFSET UNITYSDK_OFFSET(0x17534C60)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x175342F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x175354D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityMonsterIgnisFatuusEffect_TypeDefinitionIndex = 40854;

	class ConfigEntityMonsterIgnisFatuusEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectColor* monsterIgnisFatuusColor2; // 0x40
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusColorDistortionIntensity; // 0x48
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusBlurPow2; // 0x50
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusFadeOut; // 0x58
		::UnityEngine::Texture2D* _monsterIgnisFatuusNoiseTexture; // 0x60
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDisappearStart; // 0x68
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVSpeed2; // 0x70
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVScale; // 0x78
		::System::String* monsterIgnisFatuusColorTexture2Path; // 0x80
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusFadeIn; // 0x88
		::UnityEngine::Texture2D* _monsterIgnisFatuusNoiseTexture2; // 0x90
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVSpeed; // 0x98
		::System::String* monsterIgnisFatuusColorTexturePath; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusBlurPow; // 0xA8
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVSpeed2; // 0xB0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDisappearEnd; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionOffset2; // 0xC0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusColorDistortionIntensity2; // 0xC8
		::UnityEngine::Texture2D* _monsterIgnisFatuusColorTexture; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionIntensity; // 0xD8
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVScale; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionOffset; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusDistortionIntensity2; // 0xF0
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusNoiseTextureUVScale2; // 0xF8
		::System::String* monsterIgnisFatuusNoiseTexture2Path; // 0x100
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusSoftEdgeRange; // 0x108
		::MoleMole::Config::ScreenEffectColor* monsterIgnisFatuusColor; // 0x110
		::MoleMole::Config::ScreenEffectFloat* monsterIgnisFatuusSoftEdgePow; // 0x118
		::UnityEngine::Texture2D* _monsterIgnisFatuusColorTexture2; // 0x120
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVSpeed; // 0x128
		::MoleMole::Config::ScreenEffectVector2* monsterIgnisFatuusColorTextureUVScale2; // 0x130
		::System::String* monsterIgnisFatuusNoiseTexturePath; // 0x138
		::System::Boolean useMonsterIgnisFatuusColorTextureAlpha; // 0x140
		::System::Boolean monsterIgnisFatuusSelfMask; // 0x141
		::System::Boolean monsterIgnisFatuusActive; // 0x142
		::System::Int32 monsterIgnisFatuusDownSample; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVScale2HandleType; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusBlurPow2HandleType; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionOffsetHandleType; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorDistortionIntensity2HandleType; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType useMonsterIgnisFatuusColorTextureAlphaHandleType; // 0x158
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVSpeed2HandleType; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVSpeedHandleType; // 0x160
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusActiveHandleType; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorHandleType; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTexture2HandleType; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDisappearStartHandleType; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionIntensityHandleType; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDisappearEndHandleType; // 0x178
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureHandleType; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureHandleType; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorBlendModeHandleType; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusSelfMaskHandleType; // 0x188
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusFadeOutHandleType; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColor2HandleType; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDepthMaskOffsetHandleType; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVScaleHandleType; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVSpeed2HandleType; // 0x19C
		::System::Single monsterIgnisFatuusDepthMaskOffset; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTexture2HandleType; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVScaleHandleType; // 0x1A8
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDownSampleHandleType; // 0x1AC
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionIntensity2HandleType; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusDistortionOffset2HandleType; // 0x1B4
		::UnityEngine::Rendering::Universal::BlendModes monsterIgnisFatuusColorBlendMode; // 0x1B8
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusBlurPowHandleType; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusFadeInHandleType; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusSoftEdgeRangeHandleType; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusSoftEdgePowHandleType; // 0x1C8
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorTextureUVSpeedHandleType; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusNoiseTextureUVScale2HandleType; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType monsterIgnisFatuusColorDistortionIntensityHandleType; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetMonsterIgnisFatuusActive(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSACTIVE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetMonsterIgnisFatuusDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetMonsterIgnisFatuusSelfMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSELFMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDepthMaskOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDEPTHMASKOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::BlendModes GetMonsterIgnisFatuusColorBlendMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::BlendModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORBLENDMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseMonsterIgnisFatuusColorTextureAlpha(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETUSEMONSTERIGNISFATUUSCOLORTEXTUREALPHA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetMonsterIgnisFatuusColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusColorTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusColorTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusNoiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusNoiseTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusBlurPow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusColorDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetMonsterIgnisFatuusColor2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLOR2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusColorTexture2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusColorTexture2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTURE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVScale2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSCALE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusColorTextureUVSpeed2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORTEXTUREUVSPEED2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_monsterIgnisFatuusNoiseTexture2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GET_MONSTERIGNISFATUUSNOISETEXTURE2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMonsterIgnisFatuusNoiseTexture2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTURE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVScale2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSCALE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMonsterIgnisFatuusNoiseTextureUVSpeed2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSNOISETEXTUREUVSPEED2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDistortionOffset2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISTORTIONOFFSET2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusBlurPow2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSBLURPOW2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusColorDistortionIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSCOLORDISTORTIONINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusSoftEdgePow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGEPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusSoftEdgeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSSOFTEDGERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDisappearStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEARSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusDisappearEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSDISAPPEAREND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusFadeIn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMonsterIgnisFatuusFadeOut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYMONSTERIGNISFATUUSEFFECT_GETMONSTERIGNISFATUUSFADEOUT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
