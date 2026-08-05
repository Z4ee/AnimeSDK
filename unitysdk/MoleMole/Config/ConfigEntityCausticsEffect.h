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

#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1B54B210)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B54B390)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETINDIRECTSCALE_OFFSET UNITYSDK_OFFSET(0x1B54B510)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETLOCALLIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1B54B490)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETMAINLIGHTSCALE_OFFSET UNITYSDK_OFFSET(0x1B54B410)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETRANGE_OFFSET UNITYSDK_OFFSET(0x1B54B310)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETSPEED_OFFSET UNITYSDK_OFFSET(0x1B54B290)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1B54B6B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTEX_OFFSET UNITYSDK_OFFSET(0x1B54B930)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTILLING_OFFSET UNITYSDK_OFFSET(0x1B54B590)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETTINT_OFFSET UNITYSDK_OFFSET(0x1B54B610)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GETUSE_CAUSTICS_OFFSET UNITYSDK_OFFSET(0x1B54B190)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT_GET_TEX_OFFSET UNITYSDK_OFFSET(0x1B54B730)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAUSTICSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54B9A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCausticsEffect_TypeDefinitionIndex = 89864;

	class ConfigEntityCausticsEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* Use_Caustics; // 0x40
		::MoleMole::Config::ScreenEffectFloat* LocalLightScale; // 0x48
		::MoleMole::Config::ScreenEffectFloat* MainLightScale; // 0x50
		::MoleMole::Config::ScreenEffectFloat* Brightness; // 0x58
		::MoleMole::Config::ScreenEffectFloat* Speed; // 0x60
		::MoleMole::Config::ScreenEffectFloat* IndirectScale; // 0x68
		::MoleMole::Config::ScreenEffectFloat* Strength; // 0x70
		::MoleMole::Config::ScreenEffectFloat* HeightOffset; // 0x78
		::MoleMole::Config::ScreenEffectFloat* Range; // 0x80
		::System::String* TexPath; // 0x88
		::UnityEngine::Texture2D* _Tex; // 0x90
		::MoleMole::Config::ScreenEffectColor* Tint; // 0x98
		::MoleMole::Config::ScreenEffectFloat* Tilling; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType RangeHandleType; // 0xA8
		::MoleMole::Config::ScreenEffectFieldHandleType MainLightScaleHandleType; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType StrengthHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType HeightOffsetHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType TexHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType SpeedHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType LocalLightScaleHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType TillingHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType IndirectScaleHandleType; // 0xC8
		::MoleMole::Config::ScreenEffectFieldHandleType BrightnessHandleType; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType Use_CausticsHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType TintHandleType; // 0xD4

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
