#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1A343FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A344130)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETINDIRECTSCALE_OFFSET UNITYSDK_OFFSET(0x1A3442B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETLOCALLIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1A344230)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETMAINLIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1A3441B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETRANGE_OFFSET UNITYSDK_OFFSET(0x1A3440B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETSPEED_OFFSET UNITYSDK_OFFSET(0x1A344030)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1A344450)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTEX_OFFSET UNITYSDK_OFFSET(0x1A3446C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTILLING_OFFSET UNITYSDK_OFFSET(0x1A344330)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTINT_OFFSET UNITYSDK_OFFSET(0x1A3443B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETUSE_CAUSTICS_OFFSET UNITYSDK_OFFSET(0x1A343F30)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GET_TEX_OFFSET UNITYSDK_OFFSET(0x1A3444D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A344730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCausticsEffect_TypeDefinitionIndex = 41490;

	class ConfigEntityCausticsEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::UnityEngine::Texture2D* _Tex; // 0x40
		::MoleMole::Config::ScreenEffectFloat* LocalLightScale; // 0x48
		::MoleMole::Config::ScreenEffectFloat* Tilling; // 0x50
		::MoleMole::Config::ScreenEffectFloat* IndirectScale; // 0x58
		::MoleMole::Config::ScreenEffectFloat* Range; // 0x60
		::System::String* TexPath; // 0x68
		::MoleMole::Config::ScreenEffectFloat* Brightness; // 0x70
		::MoleMole::Config::ScreenEffectBool* Use_Caustics; // 0x78
		::MoleMole::Config::ScreenEffectFloat* Strength; // 0x80
		::MoleMole::Config::ScreenEffectFloat* HeightOffset; // 0x88
		::MoleMole::Config::ScreenEffectFloat* MainLightScale; // 0x90
		::MoleMole::Config::ScreenEffectFloat* Speed; // 0x98
		::MoleMole::Config::ScreenEffectColor* Tint; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType RangeHandleType; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType IndirectScaleHandleType; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType BrightnessHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType Use_CausticsHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType StrengthHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType LocalLightScaleHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType TintHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType TillingHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType HeightOffsetHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType MainLightScaleHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType TexHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType SpeedHandleType; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetUse_Caustics(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETUSE_CAUSTICS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBrightness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETBRIGHTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETRANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHeightOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETHEIGHTOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMainLightScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETMAINLIGHTSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETLOCALLIGHTSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIndirectScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETINDIRECTSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetTilling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTILLING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetTint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetStrength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETSTRENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_Tex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GET_TEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTEX_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
