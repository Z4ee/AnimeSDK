#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B918300)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B918700)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9186F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameCoinSoundAction_TypeDefinitionIndex = 46599;

	class ConfigSurfGameCoinSoundAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		static ::System::Single* StaticGet_LastCoinTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameCoinSoundAction_TypeDefinitionIndex)->GetStaticField(0xDB80);
		}
		static ::System::UInt32* StaticGet_Parameter_2_1_Surfing_Coin()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameCoinSoundAction_TypeDefinitionIndex)->GetStaticField(0xDB84);
		}
		static ::System::Int32* StaticGet_CoinCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameCoinSoundAction_TypeDefinitionIndex)->GetStaticField(0xDB88);
		}
		::System::String* soundEvent; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION__CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION_EXECUTE_OFFSET))(this);
		}
	};
}
