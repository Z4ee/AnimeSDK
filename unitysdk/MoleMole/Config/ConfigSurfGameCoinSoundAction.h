#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17054ED0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x170552C0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMECOINSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x170552B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameCoinSoundAction_TypeDefinitionIndex = 50161;

	class ConfigSurfGameCoinSoundAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		static ::System::Int32* StaticGet_CoinCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameCoinSoundAction_TypeDefinitionIndex)->GetStaticField(0xDA70);
		}
		static ::System::UInt32* StaticGet_Parameter_2_1_Surfing_Coin()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameCoinSoundAction_TypeDefinitionIndex)->GetStaticField(0xDA74);
		}
		static ::System::Single* StaticGet_LastCoinTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ConfigSurfGameCoinSoundAction_TypeDefinitionIndex)->GetStaticField(0xDA78);
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
