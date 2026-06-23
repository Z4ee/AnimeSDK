#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x18F32490)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKDEBUG_OFFSET UNITYSDK_OFFSET(0x18F328E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKROTATION_OFFSET UNITYSDK_OFFSET(0x18F32860)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASKTILING_OFFSET UNITYSDK_OFFSET(0x18F327E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETMASK_OFFSET UNITYSDK_OFFSET(0x18F32770)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x18F32500)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT_GET_MASK_OFFSET UNITYSDK_OFFSET(0x18F32580)
#define MOLEMOLE_CONFIG_CONFIGENTITYGAUSSIANBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F32960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityGaussianBlurEffect_TypeDefinitionIndex = 59872;

	class ConfigEntityGaussianBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* maskRotation; // 0x40
		::System::String* maskPath; // 0x48
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x50
		::MoleMole::Config::ScreenEffectFloat* maskTiling; // 0x58
		::UnityEngine::Texture2D* _mask; // 0x60
		::MoleMole::Config::ScreenEffectBool* maskDebug; // 0x68
		::System::Int32 downSample; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType maskRotationHandleType; // 0x78
		::MoleMole::Config::ScreenEffectFieldHandleType maskHandleType; // 0x7C
		::MoleMole::Config::ScreenEffectFieldHandleType downSampleHandleType; // 0x80
		::MoleMole::Config::ScreenEffectFieldHandleType maskDebugHandleType; // 0x84
		::MoleMole::Config::ScreenEffectFieldHandleType maskTilingHandleType; // 0x88

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
	};
}
