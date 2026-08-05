#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x1625BFA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETENABLEBLURWITHMONSTERMASK_OFFSET UNITYSDK_OFFSET(0x1625C470)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKDEBUG_OFFSET UNITYSDK_OFFSET(0x1625C3F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKROTATION_OFFSET UNITYSDK_OFFSET(0x1625C370)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKTILING_OFFSET UNITYSDK_OFFSET(0x1625C2F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASK_OFFSET UNITYSDK_OFFSET(0x1625C280)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x1625C010)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GET_MASK_OFFSET UNITYSDK_OFFSET(0x1625C090)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1625C4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityGaussianBlurEffect_TypeDefinitionIndex = 72500;

	class ConfigEntityGaussianBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::UnityEngine::Texture2D* _mask; // 0x40
		::MoleMole::Config::ScreenEffectBool* enableBlurWithMonsterMask; // 0x48
		::System::String* maskPath; // 0x50
		::MoleMole::Config::ScreenEffectFloat* maskTiling; // 0x58
		::MoleMole::Config::ScreenEffectBool* maskDebug; // 0x60
		::MoleMole::Config::ScreenEffectFloat* maskRotation; // 0x68
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType enableBlurWithMonsterMaskHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType maskHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType maskTilingHandleType; // 0x80
		::System::Int32 downSample; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType maskDebugHandleType; // 0x88
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x8C
		::MoleMole::Config::ScreenEffectFieldHandleType maskRotationHandleType; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_mask()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GET_MASK_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMaskTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMaskRotation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKROTATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetMaskDebug(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKDEBUG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableBlurWithMonsterMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETENABLEBLURWITHMONSTERMASK_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
