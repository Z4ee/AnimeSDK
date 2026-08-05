#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56A860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZoneEffectConfig_TypeDefinitionIndex = 63408;

	class ZoneEffectConfig : public ::System::Object
	{
	public:
		::System::String* EffectPatternName; // 0x10
		::System::String* AttachPointName; // 0x18
		::MoleMole::Config::ConfigPosRot* EffectConfigPosRot; // 0x20
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x28
		::System::Boolean EntityDeathHideEffect; // 0x30
		::UnityEngine::Vector3 OverrideScale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
