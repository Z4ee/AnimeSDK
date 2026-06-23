#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3629F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZoneEffectConfig_TypeDefinitionIndex = 59877;

	class ZoneEffectConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigPosRot* EffectConfigPosRot; // 0x10
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x18
		::System::String* AttachPointName; // 0x20
		::System::String* EffectPatternName; // 0x28
		::UnityEngine::Vector3 OverrideScale; // 0x30
		::System::Boolean EntityDeathHideEffect; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
