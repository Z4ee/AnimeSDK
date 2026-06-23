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

#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTFLICKFREQUENCY_OFFSET UNITYSDK_OFFSET(0x18AD35E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTUREOVERLAYSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x18AD3540)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTUREOVERLAY_OFFSET UNITYSDK_OFFSET(0x18AD34D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURESCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x106D7770)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETDIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x106D7610)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0x106D7680)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x106D76F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTUREOVERLAY_OFFSET UNITYSDK_OFFSET(0x106D7810)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT_GET_DIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x106D7420)
#define MOLEMOLE_CONFIG_CONFIGENTITYLENSDIRTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD3660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityLensDirtEffect_TypeDefinitionIndex = 71548;

	class ConfigEntityLensDirtEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* dirtFlickFrequency; // 0x40
		::UnityEngine::Texture2D* _dirtTextureOverlay; // 0x48
		::MoleMole::Config::ScreenEffectVector4* dirtTextureOverlayScaleOffset; // 0x50
		::System::String* dirtTextureOverlayPath; // 0x58
		::UnityEngine::Texture2D* _dirtTexture; // 0x60
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x68
		::System::String* dirtTexturePath; // 0x70
		::MoleMole::Config::ScreenEffectVector4* dirtTextureScaleOffset; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType dirtFlickFrequencyHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureScaleOffsetHandleType; // 0x84
		::System::Boolean enable; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureOverlayScaleOffsetHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureOverlayHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x94
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType dirtTextureHandleType; // 0x9C

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
