#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETCANBEDISABLEDBYGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x18F32FA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETDOWNSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x18F32DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETRADIUS_OFFSET UNITYSDK_OFFSET(0x18F32E20)
#define MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETSAMPLECOUNTMAIN_OFFSET UNITYSDK_OFFSET(0x18F32EA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETSTANDARDDEVIATION_OFFSET UNITYSDK_OFFSET(0x18F32F20)
#define MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F33020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityPartialBlurEffect_TypeDefinitionIndex = 79386;

	class ConfigEntityPartialBlurEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* canBeDisabledByGlobalConfig; // 0x40
		::MoleMole::Config::ScreenEffectFloat* sampleCountMain; // 0x48
		::MoleMole::Config::ScreenEffectFloat* radius; // 0x50
		::MoleMole::Config::ScreenEffectFloat* downScaleFactor; // 0x58
		::MoleMole::Config::ScreenEffectFloat* standardDeviation; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType canBeDisabledByGlobalConfigHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType radiusHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountMainHandleType; // 0x70
		::MoleMole::Config::ScreenEffectFieldHandleType downScaleFactorHandleType; // 0x74
		::MoleMole::Config::ScreenEffectFieldHandleType standardDeviationHandleType; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetDownScaleFactor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETDOWNSCALEFACTOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCountMain(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETSAMPLECOUNTMAIN_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetStandardDeviation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETSTANDARDDEVIATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCanBeDisabledByGlobalConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYPARTIALBLUREFFECT_GETCANBEDISABLEDBYGLOBALCONFIG_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
