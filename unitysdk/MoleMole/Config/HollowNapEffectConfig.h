#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectType.h"
#include "unitysdk/MoleMole/Config/TargetCamera.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_HOLLOWNAPEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E37050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowNapEffectConfig_TypeDefinitionIndex = 39891;

	class HollowNapEffectConfig : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::MoleMole::Config::TargetCamera TargetCamera; // 0x18
		::MoleMole::Config::EffectType NapEffectType; // 0x1C
		::System::Nullable_1<::System::Single> DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWNAPEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
