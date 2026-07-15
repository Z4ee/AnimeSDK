#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1264;
class Class_1_5F4D64A4B97E38F9;
class Class_1_B26E06FC40F846CD;
class Class_1_B6441625E3D7D3E0;
class Class_1_E79EE3670D2EC49A;
class Class_1_F248B058F5A06B98;
namespace RPG::Client { class BattleViewModeDarkInitData; }
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleTeamInfoFriendTeamViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4942B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B494970)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_BLOCKID_OFFSET UNITYSDK_OFFSET(0x1B494C50)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0x1B494CA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1B494C00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_FRIENDTEAM_OFFSET UNITYSDK_OFFSET(0x1B494CF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ISCANPRESENT_OFFSET UNITYSDK_OFFSET(0x1B493F70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_SET_FRIENDTEAM_OFFSET UNITYSDK_OFFSET(0x1B494D00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B493F20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETBATTLEDECK_OFFSET UNITYSDK_OFFSET(0x1B494900)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETDEFAULTINITENTITY_OFFSET UNITYSDK_OFFSET(0x1B494880)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETSPECIFIEDINITENTITY_OFFSET UNITYSDK_OFFSET(0x1B494210)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__ONPAGEENTER_OFFSET UNITYSDK_OFFSET(0x1B494A40)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleTeamInfoViewModel_TypeDefinitionIndex = 76019;

	class FateRinBattleTeamInfoViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_1_F248B058F5A06B98* _AvatarService; // 0x20
		::Class_1_B26E06FC40F846CD* _GameState; // 0x28
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x30
		::Class_0_16E4307DCC419505_1264* _DeckRepository; // 0x38
		::RPG::Client::BattleViewModeInitData* _InitData; // 0x40
		::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* _FriendTeam_k__BackingField; // 0x48
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x50

		::System::Void _ctor(::Class_0_16E4307DCC419505_1264* a1, ::Class_1_B26E06FC40F846CD* a2, ::Class_1_F248B058F5A06B98* a3, ::Class_1_5F4D64A4B97E38F9* a4, ::Class_1_E79EE3670D2EC49A* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1264*, ::Class_1_B26E06FC40F846CD*, ::Class_1_F248B058F5A06B98*, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsCanPresent(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ISCANPRESENT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		static ::System::Action* GetPageEnterCallback()
		{
			return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET))();
		}

		static ::RPG::GameCore::GameEntity* _GetSpecifiedInitEntity(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETSPECIFIEDINITENTITY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _GetDefaultInitEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETDEFAULTINITENTITY_OFFSET))();
		}

		::Class_1_B6441625E3D7D3E0* _GetBattleDeck()
		{
			return ((::Class_1_B6441625E3D7D3E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETBATTLEDECK_OFFSET))(this);
		}

		static ::System::Void _OnPageEnter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__ONPAGEENTER_OFFSET))();
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_ENTITY_OFFSET))(this);
		}

		::System::UInt32 get_BlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_BLOCKID_OFFSET))(this);
		}

		::RPG::Client::BattleViewModeDarkInitData* get_DarkInitData()
		{
			return ((::RPG::Client::BattleViewModeDarkInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_DARKINITDATA_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* get_FriendTeam()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_FRIENDTEAM_OFFSET))(this);
		}

		::System::Void set_FriendTeam(::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_SET_FRIENDTEAM_OFFSET))(this, a1);
		}
	};
}
