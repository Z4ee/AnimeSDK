#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }

#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENTGRADIENT_OFFSET UNITYSDK_OFFSET(0x12D36670)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENT_OFFSET UNITYSDK_OFFSET(0x12D35E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETBLUE_OFFSET UNITYSDK_OFFSET(0x12D374F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x12D368A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCUSTOMGAMMA_OFFSET UNITYSDK_OFFSET(0x12D37140)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETENABLE_OFFSET UNITYSDK_OFFSET(0x12D36E40)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETFRONTTINT_OFFSET UNITYSDK_OFFSET(0x12D35F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETGAIN_OFFSET UNITYSDK_OFFSET(0x12D37300)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x12D37260)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETGREEN_OFFSET UNITYSDK_OFFSET(0x12D37480)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETHUEVSHUE_OFFSET UNITYSDK_OFFSET(0x12D37560)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETHUEVSSAT_OFFSET UNITYSDK_OFFSET(0x12D375D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETLIFT_OFFSET UNITYSDK_OFFSET(0x12D371C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETLUMVSSAT_OFFSET UNITYSDK_OFFSET(0x12D376B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETMASTER_OFFSET UNITYSDK_OFFSET(0x12D373A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETOUTLINETINT_OFFSET UNITYSDK_OFFSET(0x12D36780)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x12D36820)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRED_OFFSET UNITYSDK_OFFSET(0x12D37410)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETREVERTSATURATION_OFFSET UNITYSDK_OFFSET(0x12D369A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWCOLORFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x12D36BA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWINTENSITYFORCHARA_OFFSET UNITYSDK_OFFSET(0x12D36AA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER01_OFFSET UNITYSDK_OFFSET(0x12D36C40)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER02_OFFSET UNITYSDK_OFFSET(0x12D36CC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER03_OFFSET UNITYSDK_OFFSET(0x12D36D40)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER04_OFFSET UNITYSDK_OFFSET(0x12D36DC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWWIDTHFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x12D36B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x12D36920)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATVSSAT_OFFSET UNITYSDK_OFFSET(0x12D37640)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWFADETINT_OFFSET UNITYSDK_OFFSET(0x12D365D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWTINT_OFFSET UNITYSDK_OFFSET(0x12D36490)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWFADETINT_OFFSET UNITYSDK_OFFSET(0x12D36350)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWTINT_OFFSET UNITYSDK_OFFSET(0x12D36210)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHOULDERANGLE_OFFSET UNITYSDK_OFFSET(0x12D370C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHOULDERLENGTH_OFFSET UNITYSDK_OFFSET(0x12D37040)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHOULDERSTRENGTH_OFFSET UNITYSDK_OFFSET(0x12D36FC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINFRONTTINT_OFFSET UNITYSDK_OFFSET(0x12D35EF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWFADETINT_OFFSET UNITYSDK_OFFSET(0x12D36530)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWTINT_OFFSET UNITYSDK_OFFSET(0x12D363F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWFADETINT_OFFSET UNITYSDK_OFFSET(0x12D362B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWTINT_OFFSET UNITYSDK_OFFSET(0x12D36170)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSSSTINT_OFFSET UNITYSDK_OFFSET(0x12D36030)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSSSTINT_OFFSET UNITYSDK_OFFSET(0x12D360D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETTOELENGTH_OFFSET UNITYSDK_OFFSET(0x12D36F40)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETTOESTRENGTH_OFFSET UNITYSDK_OFFSET(0x12D36EC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETUSESHADOWTINTASOUTLINE_OFFSET UNITYSDK_OFFSET(0x12D36710)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETWEAPONUSECUSTOMLIGHTPROPERTY_OFFSET UNITYSDK_OFFSET(0x12D36A20)
#define MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12D37720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAvatarColorCorrection_TypeDefinitionIndex = 47581;

	class ConfigEntityAvatarColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x40
		::MoleMole::Config::ScreenEffectColor* skinShallowTint; // 0x48
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsHue; // 0x50
		::MoleMole::Config::ScreenEffectColor* skinShallowFadeTint; // 0x58
		::MoleMole::Config::ScreenEffectBool* weaponUseCustomLightProperty; // 0x60
		::UnityEngine::NAPRenderPipeline0::TextureCurve* master; // 0x68
		::MoleMole::Config::ScreenEffectFloat* toeStrength; // 0x70
		::MoleMole::Config::ScreenEffectColor* shallowTint; // 0x78
		::MoleMole::Config::ScreenEffectFloat* rimGlowStyleForCharacter03; // 0x80
		::MoleMole::Config::ScreenEffectVector4* lift; // 0x88
		::UnityEngine::NAPRenderPipeline0::TextureCurve* blue; // 0x90
		::MoleMole::Config::ScreenEffectFloat* shoulderLength; // 0x98
		::MoleMole::Config::ScreenEffectColor* skinSssTint; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* rimGlowIntensityForChara; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0xB0
		::MoleMole::Config::ScreenEffectFloat* rimGlowStyleForCharacter02; // 0xB8
		::MoleMole::Config::ScreenEffectColor* skinFrontTint; // 0xC0
		::MoleMole::Config::ScreenEffectColor* ambientGradient; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* rimGlowStyleForCharacter01; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* toeLength; // 0xD8
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* shoulderStrength; // 0xE8
		::MoleMole::Config::ScreenEffectColor* rimGlowColorForCharacter; // 0xF0
		::MoleMole::Config::ScreenEffectColor* shadowFadeTint; // 0xF8
		::MoleMole::Config::ScreenEffectColor* frontTint; // 0x100
		::MoleMole::Config::ScreenEffectColor* shadowTint; // 0x108
		::MoleMole::Config::ScreenEffectColor* ambient; // 0x110
		::UnityEngine::NAPRenderPipeline0::TextureCurve* lumVsSat; // 0x118
		::UnityEngine::NAPRenderPipeline0::TextureCurve* green; // 0x120
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsSat; // 0x128
		::MoleMole::Config::ScreenEffectFloat* rimGlowWidthForCharacter; // 0x130
		::MoleMole::Config::ScreenEffectColor* skinShadowFadeTint; // 0x138
		::MoleMole::Config::ScreenEffectBool* enable; // 0x140
		::MoleMole::Config::ScreenEffectFloat* shoulderAngle; // 0x148
		::MoleMole::Config::ScreenEffectColor* skinShadowTint; // 0x150
		::UnityEngine::NAPRenderPipeline0::TextureCurve* red; // 0x158
		::MoleMole::Config::ScreenEffectColor* outlineTint; // 0x160
		::MoleMole::Config::ScreenEffectFloat* rimGlowStyleForCharacter04; // 0x168
		::MoleMole::Config::ScreenEffectVector4* gain; // 0x170
		::MoleMole::Config::ScreenEffectBool* revertSaturation; // 0x178
		::MoleMole::Config::ScreenEffectVector4* gamma; // 0x180
		::UnityEngine::NAPRenderPipeline0::TextureCurve* satVsSat; // 0x188
		::MoleMole::Config::ScreenEffectColor* sssTint; // 0x190
		::MoleMole::Config::ScreenEffectColor* shallowFadeTint; // 0x198
		::MoleMole::Config::ScreenEffectFloat* customGamma; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x1A8
		::MoleMole::Config::ScreenEffectFieldHandleType useShadowTintAsOutlineHandleType; // 0x1AC
		::MoleMole::Config::ScreenEffectFieldHandleType blueHandleType; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowStyleForCharacter02HandleType; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType shoulderStrengthHandleType; // 0x1B8
		::MoleMole::Config::ScreenEffectFieldHandleType liftHandleType; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowStyleForCharacter01HandleType; // 0x1C0
		::MoleMole::Config::ScreenEffectFieldHandleType shoulderLengthHandleType; // 0x1C4
		::MoleMole::Config::ScreenEffectFieldHandleType customGammaHandleType; // 0x1C8
		::System::Boolean useShadowTintAsOutline; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ambientGradientHandleType; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType hueVsSatHandleType; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType weaponUseCustomLightPropertyHandleType; // 0x1D8
		::MoleMole::Config::ScreenEffectFieldHandleType frontTintHandleType; // 0x1DC
		::MoleMole::Config::ScreenEffectFieldHandleType shadowFadeTintHandleType; // 0x1E0
		::MoleMole::Config::ScreenEffectFieldHandleType lumVsSatHandleType; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType skinShadowFadeTintHandleType; // 0x1E8
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType hueVsHueHandleType; // 0x1F0
		::MoleMole::Config::ScreenEffectFieldHandleType redHandleType; // 0x1F4
		::MoleMole::Config::ScreenEffectFieldHandleType revertSaturationHandleType; // 0x1F8
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowStyleForCharacter04HandleType; // 0x1FC
		::MoleMole::Config::ScreenEffectFieldHandleType masterHandleType; // 0x200
		::MoleMole::Config::ScreenEffectFieldHandleType skinShallowTintHandleType; // 0x204
		::MoleMole::Config::ScreenEffectFieldHandleType skinSssTintHandleType; // 0x208
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x20C
		::MoleMole::Config::ScreenEffectFieldHandleType skinFrontTintHandleType; // 0x210
		::MoleMole::Config::ScreenEffectFieldHandleType skinShadowTintHandleType; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType shadowTintHandleType; // 0x218
		::MoleMole::Config::ScreenEffectFieldHandleType greenHandleType; // 0x21C
		::MoleMole::Config::ScreenEffectFieldHandleType satVsSatHandleType; // 0x220
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x228
		::MoleMole::Config::ScreenEffectFieldHandleType skinShallowFadeTintHandleType; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowColorForCharacterHandleType; // 0x230
		::MoleMole::Config::ScreenEffectFieldHandleType gainHandleType; // 0x234
		::MoleMole::Config::ScreenEffectFieldHandleType sssTintHandleType; // 0x238
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowStyleForCharacter03HandleType; // 0x23C
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowWidthForCharacterHandleType; // 0x240
		::MoleMole::Config::ScreenEffectFieldHandleType shallowTintHandleType; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType shallowFadeTintHandleType; // 0x248
		::MoleMole::Config::ScreenEffectFieldHandleType rimGlowIntensityForCharaHandleType; // 0x24C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineTintHandleType; // 0x250
		::MoleMole::Config::ScreenEffectFieldHandleType shoulderAngleHandleType; // 0x254
		::MoleMole::Config::ScreenEffectFieldHandleType toeLengthHandleType; // 0x258
		::MoleMole::Config::ScreenEffectFieldHandleType toeStrengthHandleType; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ambientHandleType; // 0x260

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color GetAmbient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinFrontTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINFRONTTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFrontTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETFRONTTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinSssTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSSSTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSssTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSSSTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShallowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShallowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShallowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHALLOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShallowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHALLOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShadowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShadowTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkinShadowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSKINSHADOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetShadowFadeTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHADOWFADETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetAmbientGradient(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETAMBIENTGRADIENT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseShadowTintAsOutline(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETUSESHADOWTINTASOUTLINE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOutlineTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETOUTLINETINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetRevertSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETREVERTSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetWeaponUseCustomLightProperty(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETWEAPONUSECUSTOMLIGHTPROPERTY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRimGlowIntensityForChara(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWINTENSITYFORCHARA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRimGlowWidthForCharacter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWWIDTHFORCHARACTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetRimGlowColorForCharacter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWCOLORFORCHARACTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRimGlowStyleForCharacter01(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER01_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRimGlowStyleForCharacter02(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER02_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRimGlowStyleForCharacter03(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER03_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRimGlowStyleForCharacter04(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRIMGLOWSTYLEFORCHARACTER04_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetToeStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETTOESTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetToeLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETTOELENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShoulderStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHOULDERSTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShoulderLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHOULDERLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetShoulderAngle(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSHOULDERANGLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCustomGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETCUSTOMGAMMA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetLift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETLIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETGAMMA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetGain(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETGAIN_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetMaster(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETMASTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetRed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETRED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetGreen(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETGREEN_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetBlue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETBLUE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetHueVsHue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETHUEVSHUE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetHueVsSat(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETHUEVSSAT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetSatVsSat(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETSATVSSAT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::TextureCurve* GetLumVsSat(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::TextureCurve*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYAVATARCOLORCORRECTION_GETLUMVSSAT_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
