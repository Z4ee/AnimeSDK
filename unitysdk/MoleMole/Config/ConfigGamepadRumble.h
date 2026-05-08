#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGGAMEPADRUMBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x141F0F70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGamepadRumble_TypeDefinitionIndex = 64792;

	class ConfigGamepadRumble : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GamepadRumbleEntry*>* GamepadRumbleEntryDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGAMEPADRUMBLE__CTOR_OFFSET))(this);
		}
	};
}
