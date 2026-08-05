#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGBLENDWITHFOGCARD_OFFSET UNITYSDK_OFFSET(0x1A4AFEE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGDISTANCE2_OFFSET UNITYSDK_OFFSET(0x1A4AF620)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGDISTANCEFORCHAR_OFFSET UNITYSDK_OFFSET(0x1A4AF840)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4AF500)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AF580)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGFINALCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AF6A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGFIXFXFOGFINALCOLORANOTWORK_OFFSET UNITYSDK_OFFSET(0x1A4AFDE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGFORCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A4AF740)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGINTENSITYFORSCENEANDCHAR_OFFSET UNITYSDK_OFFSET(0x1A4AFCE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGINTENSITYFORSKY_OFFSET UNITYSDK_OFFSET(0x1A4AF8C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGINTENSITYSCALEFORCHAR_OFFSET UNITYSDK_OFFSET(0x1A4AFD60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGKEEPCHARFOGSAMEASSCENE_OFFSET UNITYSDK_OFFSET(0x1A4AFE60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGOVERRIDECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1A4AF300)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGSTARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AF460)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGSTARTFORCHAR_OFFSET UNITYSDK_OFFSET(0x1A4AF7C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGSTART_OFFSET UNITYSDK_OFFSET(0x1A4AF3E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOG_OFFSET UNITYSDK_OFFSET(0x1A4AF370)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXVOLUMETRICFOGINTENSITY_OFFSET UNITYSDK_OFFSET(0x1A4AF940)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGCOLOR_OFFSET UNITYSDK_OFFSET(0x1A4AFBC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGENABLE_OFFSET UNITYSDK_OFFSET(0x1A4AF9C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGEND2DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4AFB40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4AFAC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGMAXDENSITY_OFFSET UNITYSDK_OFFSET(0x1A4AFC60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGSTARTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4AFA40)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AFF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXFogEffect_TypeDefinitionIndex = 84095;

	class ConfigEntityFXFogEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectColor* fxFogFinalColor; // 0x40
		::MoleMole::Config::ScreenEffectFloat* fxVolumetricFogIntensity; // 0x48
		::MoleMole::Config::ScreenEffectFloat* fxFogDistanceForChar; // 0x50
		::MoleMole::Config::ScreenEffectFloat* PPFogEndDistance; // 0x58
		::MoleMole::Config::ScreenEffectColor* PPFogColor; // 0x60
		::MoleMole::Config::ScreenEffectFloat* PPFogEnd2Distance; // 0x68
		::MoleMole::Config::ScreenEffectFloat* PPFogMaxDensity; // 0x70
		::MoleMole::Config::ScreenEffectFloat* fxFogStart; // 0x78
		::MoleMole::Config::ScreenEffectFloat* fxFogStartForChar; // 0x80
		::MoleMole::Config::ScreenEffectBool* fxFogFixFxFogFinalColorANotWork; // 0x88
		::MoleMole::Config::ScreenEffectFloat* PPFogStartDistance; // 0x90
		::MoleMole::Config::ScreenEffectBool* fxFogKeepCharFogSameAsScene; // 0x98
		::MoleMole::Config::ScreenEffectFloat* fxFogIntensityForSky; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* fxFogIntensityScaleForChar; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* fxFogDistance; // 0xB0
		::MoleMole::Config::ScreenEffectBool* PPFogEnable; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* fxFogDistance2; // 0xC0
		::MoleMole::Config::ScreenEffectColor* fxFogStartColor; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* fxFogBlendWithFogCard; // 0xD0
		::MoleMole::Config::ScreenEffectBool* fxFogForCharacter; // 0xD8
		::MoleMole::Config::ScreenEffectColor* fxFogEndColor; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* fxFogIntensityForSceneAndChar; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType PPFogStartDistanceHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType fxVolumetricFogIntensityHandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogIntensityForSkyHandleType; // 0xF8
		::MoleMole::Config::ScreenEffectFieldHandleType PPFogEndDistanceHandleType; // 0xFC
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogStartForCharHandleType; // 0x100
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogFinalColorHandleType; // 0x104
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogHandleType; // 0x108
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogKeepCharFogSameAsSceneHandleType; // 0x10C
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogStartColorHandleType; // 0x110
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogDistance2HandleType; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogForCharacterHandleType; // 0x118
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogIntensityScaleForCharHandleType; // 0x11C
		::MoleMole::Config::ScreenEffectFieldHandleType PPFogColorHandleType; // 0x120
		::MoleMole::Config::ScreenEffectFieldHandleType PPFogEnableHandleType; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType PPFogEnd2DistanceHandleType; // 0x128
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogIntensityForSceneAndCharHandleType; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogOverrideCustomDataHandleType; // 0x130
		::System::Boolean fxFog; // 0x134
		::System::Boolean fxFogOverrideCustomData; // 0x135
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogBlendWithFogCardHandleType; // 0x138
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogStartHandleType; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogEndColorHandleType; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogDistanceHandleType; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogFixFxFogFinalColorANotWorkHandleType; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogDistanceForCharHandleType; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType PPFogMaxDensityHandleType; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetFxFogOverrideCustomData(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGOVERRIDECUSTOMDATA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFog(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFxFogStartColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGSTARTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFxFogEndColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGENDCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogDistance2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGDISTANCE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFxFogFinalColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGFINALCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFogForCharacter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGFORCHARACTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogStartForChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGSTARTFORCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogDistanceForChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGDISTANCEFORCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogIntensityForSky(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGINTENSITYFORSKY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxVolumetricFogIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXVOLUMETRICFOGINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetPPFogEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPPFogStartDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGSTARTDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPPFogEndDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGENDDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPPFogEnd2Distance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGEND2DISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetPPFogColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPPFogMaxDensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETPPFOGMAXDENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogIntensityForSceneAndChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGINTENSITYFORSCENEANDCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogIntensityScaleForChar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGINTENSITYSCALEFORCHAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFogFixFxFogFinalColorANotWork(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGFIXFXFOGFINALCOLORANOTWORK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFogKeepCharFogSameAsScene(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGKEEPCHARFOGSAMEASSCENE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxFogBlendWithFogCard(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXFOGEFFECT_GETFXFOGBLENDWITHFOGCARD_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
