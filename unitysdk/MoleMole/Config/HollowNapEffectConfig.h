#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectType.h"
#include "unitysdk/MoleMole/Config/TargetCamera.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWNAPEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5ABF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowNapEffectConfig_TypeDefinitionIndex = 57445;

	class HollowNapEffectConfig : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::MoleMole::Config::EffectType NapEffectType; // 0x18
		::System::Nullable_1<::System::Single> DelayTime; // 0x1C
		::MoleMole::Config::TargetCamera TargetCamera; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWNAPEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
