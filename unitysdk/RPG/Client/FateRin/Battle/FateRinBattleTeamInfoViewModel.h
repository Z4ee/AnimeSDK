#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1343;
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

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCFD7A70)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GETPAGEENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xCFD8140)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_BLOCKID_OFFSET UNITYSDK_OFFSET(0xCFD8430)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_DARKINITDATA_OFFSET UNITYSDK_OFFSET(0xCFD8480)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCFD83E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_GET_FRIENDTEAM_OFFSET UNITYSDK_OFFSET(0xCFD84D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_ISCANPRESENT_OFFSET UNITYSDK_OFFSET(0xCFD7730)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL_SET_FRIENDTEAM_OFFSET UNITYSDK_OFFSET(0xCFD84E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD76E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETBATTLEDECK_OFFSET UNITYSDK_OFFSET(0xCFD80D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETDEFAULTINITENTITY_OFFSET UNITYSDK_OFFSET(0xCFD8050)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__GETSPECIFIEDINITENTITY_OFFSET UNITYSDK_OFFSET(0xCFD79D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__ONPAGEENTER_OFFSET UNITYSDK_OFFSET(0xCFD8210)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleTeamInfoViewModel_TypeDefinitionIndex = 79653;

	class FateRinBattleTeamInfoViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::Class_0_16E4307DCC419505_1343* _DeckRepository; // 0x20
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x28
		::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoFriendTeamViewModel* _FriendTeam_k__BackingField; // 0x30
		::RPG::Client::BattleViewModeInitData* _InitData; // 0x38
		::Class_1_E79EE3670D2EC49A* _UIPresentService; // 0x40
		::Class_1_F248B058F5A06B98* _AvatarService; // 0x48
		::Class_1_B26E06FC40F846CD* _GameState; // 0x50

		::System::Void _ctor(::Class_0_16E4307DCC419505_1343* a1, ::Class_1_B26E06FC40F846CD* a2, ::Class_1_F248B058F5A06B98* a3, ::Class_1_5F4D64A4B97E38F9* a4, ::Class_1_E79EE3670D2EC49A* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1343*, ::Class_1_B26E06FC40F846CD*, ::Class_1_F248B058F5A06B98*, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
