#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGLEVELENDCAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D24630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelEndCameraEffect_TypeDefinitionIndex = 78274;

	class ConfigLevelEndCameraEffect : public ::System::Object
	{
	public:
		::System::String* DefaultKey; // 0x10
		::MoleMole::Config::ScreenEffectType EffectType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELENDCAMERAEFFECT__CTOR_OFFSET))(this);
		}
	};
}
