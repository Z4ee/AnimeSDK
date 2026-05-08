#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTFLICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0x186B99F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTUREOVERLAYSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x186B9950)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTUREOVERLAY_OFFSET UNITYSDK_OFFSET(0x186B98E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURESCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x186B9650)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x186B94F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0x186B9560)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x186B95D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTUREOVERLAY_OFFSET UNITYSDK_OFFSET(0x186B96F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x186B9300)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x186B9A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityLensDirtEffect_TypeDefinitionIndex = 63086;

	class ConfigEntityLensDirtEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::System::String* dirtTextureOverlayPath; // 0x40
		::MoleMole::Config::ScreenEffectFloat* dirtFlickFrequency; // 0x48
		::UnityEngine::Texture2D* _dirtTextureOverlay; // 0x50
		::MoleMole::Config::ScreenEffectVector4* dirtTextureOverlayScaleOffset; // 0x58
		::System::String* dirtTexturePath; // 0x60
		::MoleMole::Config::ScreenEffectVector4* dirtTextureScaleOffset; // 0x68
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x70
		::UnityEngine::Texture2D* _dirtTexture; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType dirtFlickFrequencyHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureOverlayScaleOffsetHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureScaleOffsetHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureOverlayHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x98
		::System::Boolean enable; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_dirtTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDirtTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetDirtTextureScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURESCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_dirtTextureOverlay()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTUREOVERLAY_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDirtTextureOverlay(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTUREOVERLAY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetDirtTextureOverlayScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTUREOVERLAYSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDirtFlickFrequency(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTFLICKFREQUENCY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
