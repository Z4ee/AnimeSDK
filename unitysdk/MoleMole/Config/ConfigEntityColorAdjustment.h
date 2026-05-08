#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETAPPLYLUTTOSKYBOX_OFFSET UNITYSDK_OFFSET(0x17533560)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCHARACTEREXPOSURE_OFFSET UNITYSDK_OFFSET(0x17533760)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCOLORFILTER_OFFSET UNITYSDK_OFFSET(0x17533360)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x175332E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0x175334E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETFXEXPOSURE_OFFSET UNITYSDK_OFFSET(0x17533AC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETFXLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x17533A50)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETHUESHIFT_OFFSET UNITYSDK_OFFSET(0x175333E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x17533260)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x17533460)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSCENEEXPOSURE_OFFSET UNITYSDK_OFFSET(0x175336E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYBOXEXPOSURE_OFFSET UNITYSDK_OFFSET(0x175337E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYCONTRAST_OFFSET UNITYSDK_OFFSET(0x17533660)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYSATURATION_OFFSET UNITYSDK_OFFSET(0x175335E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETUSESCENEDESATURATEMASK_OFFSET UNITYSDK_OFFSET(0x175331F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GET_FXLUTTEXTURE_OFFSET UNITYSDK_OFFSET(0x17533860)
#define MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17533B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityColorAdjustment_TypeDefinitionIndex = 74250;

	class ConfigEntityColorAdjustment : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::System::String* FXLutTexturePath; // 0x40
		::MoleMole::Config::ScreenEffectFloat* skySaturation; // 0x48
		::MoleMole::Config::ScreenEffectFloat* skyContrast; // 0x50
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x58
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0x60
		::MoleMole::Config::ScreenEffectFloat* characterExposure; // 0x68
		::MoleMole::Config::ScreenEffectFloat* skyboxExposure; // 0x70
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x78
		::MoleMole::Config::ScreenEffectFloat* sceneExposure; // 0x80
		::UnityEngine::Texture2D* _FXLutTexture; // 0x88
		::MoleMole::Config::ScreenEffectFloat* FXExposure; // 0x90
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x98
		::MoleMole::Config::ScreenEffectFloat* hueShift; // 0xA0
		::MoleMole::Config::ScreenEffectBool* applyLutToSkybox; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType applyLutToSkyboxHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType skySaturationHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType FXExposureHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType characterExposureHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType skyboxExposureHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType FXLutTextureHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType UseSceneDesaturateMaskHandleType; // 0xD0
		::System::Boolean UseSceneDesaturateMask; // 0xD4
		::UnityEngine::Color colorFilter; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0xE8
		::MoleMole::Config::ScreenEffectFieldHandleType colorFilterHandleType; // 0xEC
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0xF0
		::MoleMole::Config::ScreenEffectFieldHandleType skyContrastHandleType; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneExposureHandleType; // 0xF8
		::MoleMole::Config::ScreenEffectFieldHandleType hueShiftHandleType; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetUseSceneDesaturateMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETUSESCENEDESATURATEMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorFilter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCOLORFILTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHueShift(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETHUESHIFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDesaturate(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETDESATURATE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetApplyLutToSkybox(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETAPPLYLUTTOSKYBOX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkySaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSCENEEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETCHARACTEREXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSkyboxExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETSKYBOXEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_FXLutTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GET_FXLUTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetFXLutTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETFXLUTTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFXExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCOLORADJUSTMENT_GETFXEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
