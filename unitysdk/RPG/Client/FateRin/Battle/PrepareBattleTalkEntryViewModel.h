#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"

#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_GET_TALKER_OFFSET UNITYSDK_OFFSET(0xCED6930)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xCED6950)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_SET_TALKER_OFFSET UNITYSDK_OFFSET(0xCED6940)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xCED6960)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCED6920)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int PrepareBattleTalkEntryViewModel_TypeDefinitionIndex = 80983;

	class PrepareBattleTalkEntryViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::GameCore::FateRinPrepareFightTalker _Talker_k__BackingField; // 0x20
		::RPG::Client::TextID _Text_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FateRinPrepareFightTalker get_Talker()
		{
			return ((::RPG::GameCore::FateRinPrepareFightTalker(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_GET_TALKER_OFFSET))(this);
		}

		::System::Void set_Talker(::RPG::GameCore::FateRinPrepareFightTalker a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPrepareFightTalker))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_SET_TALKER_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Text()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKENTRYVIEWMODEL_SET_TEXT_OFFSET))(this, a1);
		}
	};
}
