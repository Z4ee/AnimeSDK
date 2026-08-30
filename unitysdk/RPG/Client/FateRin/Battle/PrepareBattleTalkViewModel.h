#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_AE77A09A042BE68B;
namespace RPG::Client::FateRin::Battle { class PrepareBattleTalkEntryViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL_CREATEBYHOUGUMAPFIGHT_OFFSET UNITYSDK_OFFSET(0x1CBD8460)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0x1CBD98A0)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL_GETENTRIES_OFFSET UNITYSDK_OFFSET(0x1CBD9970)
#define RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD9830)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int PrepareBattleTalkViewModel_TypeDefinitionIndex = 79660;

	class PrepareBattleTalkViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Il2CppArray<::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>* _Entries; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>* _Entries_List; // 0x28

		::System::Void _ctor(::Il2CppArray<::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel* CreateEmpty()
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL_CREATEEMPTY_OFFSET))();
		}

		static ::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel* CreateByHouguMapFight(::Class_1_AE77A09A042BE68B* a1)
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel*(*)(::Class_1_AE77A09A042BE68B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL_CREATEBYHOUGUMAPFIGHT_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>* GetEntries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::PrepareBattleTalkEntryViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_PREPAREBATTLETALKVIEWMODEL_GETENTRIES_OFFSET))(this);
		}
	};
}
