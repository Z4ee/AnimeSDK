#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class GamepadTriggerEffectEntryBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGAMEPADTRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3BF50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGamepadTriggerEffect_TypeDefinitionIndex = 79202;

	class ConfigGamepadTriggerEffect : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GamepadTriggerEffectEntryBase*>* GamepadTriggerEffectEntryDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGAMEPADTRIGGEREFFECT__CTOR_OFFSET))(this);
		}
	};
}
