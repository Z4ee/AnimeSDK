#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETBSHIFT_OFFSET UNITYSDK_OFFSET(0x12B3A1B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETCHARACTERDISTORTIONMASKON_OFFSET UNITYSDK_OFFSET(0x12B3AA60)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETDISTORTIONTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x12B3A330)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHANGLE_OFFSET UNITYSDK_OFFSET(0x12B3A030)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHINTENSITY_OFFSET UNITYSDK_OFFSET(0x12B3AAD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHNOISETEXSPEED_OFFSET UNITYSDK_OFFSET(0x12B3ADB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHNOISETEX_OFFSET UNITYSDK_OFFSET(0x12B3AD40)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHRAND_OFFSET UNITYSDK_OFFSET(0x12B3AE30)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1AMOUNT_OFFSET UNITYSDK_OFFSET(0x12B3B190)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1RANGE_OFFSET UNITYSDK_OFFSET(0x12B3B210)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12B3B110)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1_OFFSET UNITYSDK_OFFSET(0x12B3B0A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2AMOUNT_OFFSET UNITYSDK_OFFSET(0x12B3B580)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2RANGE_OFFSET UNITYSDK_OFFSET(0x12B3B600)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2SCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12B3B500)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2_OFFSET UNITYSDK_OFFSET(0x12B3B490)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGSHIFT_OFFSET UNITYSDK_OFFSET(0x12B3A130)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETLINEBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x12B3A4B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETLINETHRESHOLDMAX_OFFSET UNITYSDK_OFFSET(0x12B3A430)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETLINETHRESHOLDMIN_OFFSET UNITYSDK_OFFSET(0x12B3A3B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETMASKTEXTILLINGOFFSET_OFFSET UNITYSDK_OFFSET(0x12B3A820)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETMASK_OFFSET UNITYSDK_OFFSET(0x12B3A7A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETNOISEDISTORTION_OFFSET UNITYSDK_OFFSET(0x12B3A2B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETNOISESCALE_OFFSET UNITYSDK_OFFSET(0x12B3A230)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETOVERRIDEMAP3DCOLOR_OFFSET UNITYSDK_OFFSET(0x12B3B680)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRANDOMOPACITYSPEED_OFFSET UNITYSDK_OFFSET(0x12B3A9E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRANDOMOPACITYTILLINGOFFSET_OFFSET UNITYSDK_OFFSET(0x12B3A940)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRANDOMOPACITY_OFFSET UNITYSDK_OFFSET(0x12B3A8C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRSHIFT_OFFSET UNITYSDK_OFFSET(0x12B3A0B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x12B3A730)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_GLITCHNOISETEX_OFFSET UNITYSDK_OFFSET(0x12B3AB50)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_GLITCHTEX1_OFFSET UNITYSDK_OFFSET(0x12B3AEB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_GLITCHTEX2_OFFSET UNITYSDK_OFFSET(0x12B3B290)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x12B3A530)
#define MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityGlitchEffect_TypeDefinitionIndex = 56812;

	class ConfigEntityGlitchEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* glitchTex2Range; // 0x40
		::MoleMole::Config::ScreenEffectFloat* lineThresholdMax; // 0x48
		::MoleMole::Config::ScreenEffectFloat* gShift; // 0x50
		::System::String* glitchTex1Path; // 0x58
		::UnityEngine::Texture2D* _glitchNoiseTex; // 0x60
		::MoleMole::Config::ScreenEffectFloat* glitchAngle; // 0x68
		::MoleMole::Config::ScreenEffectFloat* glitchTex1Range; // 0x70
		::MoleMole::Config::ScreenEffectVector2* randomOpacitySpeed; // 0x78
		::MoleMole::Config::ScreenEffectBool* randomOpacity; // 0x80
		::UnityEngine::Texture2D* _glitchTex2; // 0x88
		::MoleMole::Config::ScreenEffectFloat* distortionThreshold; // 0x90
		::MoleMole::Config::ScreenEffectFloat* glitchRand; // 0x98
		::MoleMole::Config::ScreenEffectVector2* glitchTex1ScaleOffset; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* glitchIntensity; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* noiseDistortion; // 0xB0
		::UnityEngine::Texture2D* _glitchTex1; // 0xB8
		::System::String* glitchNoiseTexPath; // 0xC0
		::MoleMole::Config::ScreenEffectFloat* glitchNoiseTexSpeed; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* glitchTex2Amount; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* glitchTex1Amount; // 0xD8
		::MoleMole::Config::ScreenEffectColor* overrideMap3DColor; // 0xE0
		::MoleMole::Config::ScreenEffectFloat* rShift; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* noiseScale; // 0xF0
		::MoleMole::Config::ScreenEffectFloat* lineThresholdMin; // 0xF8
		::System::String* texturePath; // 0x100
		::MoleMole::Config::ScreenEffectFloat* lineBrightness; // 0x108
		::MoleMole::Config::ScreenEffectBool* mask; // 0x110
		::UnityEngine::Texture2D* _texture; // 0x118
		::MoleMole::Config::ScreenEffectVector4* randomOpacityTillingOffset; // 0x120
		::System::String* glitchTex2Path; // 0x128
		::MoleMole::Config::ScreenEffectVector4* maskTexTillingOffset; // 0x130
		::MoleMole::Config::ScreenEffectVector2* glitchTex2ScaleOffset; // 0x138
		::MoleMole::Config::ScreenEffectFloat* bShift; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex1HandleType; // 0x148
		::MoleMole::Config::ScreenEffectFieldHandleType bShiftHandleType; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType glitchNoiseTexSpeedHandleType; // 0x150
		::MoleMole::Config::ScreenEffectFieldHandleType maskTexTillingOffsetHandleType; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex1ScaleOffsetHandleType; // 0x158
		::MoleMole::Config::ScreenEffectFieldHandleType characterDistortionMaskOnHandleType; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex2HandleType; // 0x160
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex2AmountHandleType; // 0x164
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex1RangeHandleType; // 0x168
		::MoleMole::Config::ScreenEffectFieldHandleType randomOpacityHandleType; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType rShiftHandleType; // 0x170
		::MoleMole::Config::ScreenEffectFieldHandleType lineThresholdMinHandleType; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType maskHandleType; // 0x178
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex1AmountHandleType; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType lineThresholdMaxHandleType; // 0x180
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex2ScaleOffsetHandleType; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType glitchIntensityHandleType; // 0x188
		::System::Boolean characterDistortionMaskOn; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType glitchTex2RangeHandleType; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType randomOpacityTillingOffsetHandleType; // 0x194
		::MoleMole::Config::ScreenEffectFieldHandleType glitchAngleHandleType; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType noiseDistortionHandleType; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType distortionThresholdHandleType; // 0x1A0
		::MoleMole::Config::ScreenEffectFieldHandleType glitchNoiseTexHandleType; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType randomOpacitySpeedHandleType; // 0x1A8
		::MoleMole::Config::ScreenEffectFieldHandleType gShiftHandleType; // 0x1AC
		::MoleMole::Config::ScreenEffectFieldHandleType lineBrightnessHandleType; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType textureHandleType; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType noiseScaleHandleType; // 0x1B8
		::MoleMole::Config::ScreenEffectFieldHandleType overrideMap3DColorHandleType; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType glitchRandHandleType; // 0x1C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single GetGlitchAngle(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHANGLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRSHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGSHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETBSHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetNoiseScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETNOISESCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetNoiseDistortion(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETNOISEDISTORTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistortionThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETDISTORTIONTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLineThresholdMin(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETLINETHRESHOLDMIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLineThresholdMax(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETLINETHRESHOLDMAX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLineBrightness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETLINEBRIGHTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetMaskTexTillingOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETMASKTEXTILLINGOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetRandomOpacity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRANDOMOPACITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetRandomOpacityTillingOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRANDOMOPACITYTILLINGOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetRandomOpacitySpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETRANDOMOPACITYSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterDistortionMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETCHARACTERDISTORTIONMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_glitchNoiseTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_GLITCHNOISETEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetGlitchNoiseTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHNOISETEX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchNoiseTexSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHNOISETEXSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchRand(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHRAND_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_glitchTex1()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_GLITCHTEX1_OFFSET))(this);
		}

		::UnityEngine::Texture* GetGlitchTex1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetGlitchTex1ScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1SCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchTex1Amount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1AMOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchTex1Range(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX1RANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_glitchTex2()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GET_GLITCHTEX2_OFFSET))(this);
		}

		::UnityEngine::Texture* GetGlitchTex2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetGlitchTex2ScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2SCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchTex2Amount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2AMOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGlitchTex2Range(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETGLITCHTEX2RANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOverrideMap3DColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGLITCHEFFECT_GETOVERRIDEMAP3DCOLOR_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
