#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT_GETENABLED_OFFSET UNITYSDK_OFFSET(0x175354E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT_GETSAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x17535560)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT_GETWORLDSPACELENGTH_OFFSET UNITYSDK_OFFSET(0x175355E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17535660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityNapContactShadowEffect_TypeDefinitionIndex = 72209;

	class ConfigEntityNapContactShadowEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* enabled; // 0x40
		::MoleMole::Config::ScreenEffectFloat* sampleCount; // 0x48
		::MoleMole::Config::ScreenEffectFloat* worldSpaceLength; // 0x50
		::MoleMole::Config::ScreenEffectFieldHandleType sampleCountHandleType; // 0x58
		::MoleMole::Config::ScreenEffectFieldHandleType enabledHandleType; // 0x5C
		::MoleMole::Config::ScreenEffectFieldHandleType worldSpaceLengthHandleType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnabled(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT_GETENABLED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetSampleCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT_GETSAMPLECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetWorldSpaceLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYNAPCONTACTSHADOWEFFECT_GETWORLDSPACELENGTH_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
