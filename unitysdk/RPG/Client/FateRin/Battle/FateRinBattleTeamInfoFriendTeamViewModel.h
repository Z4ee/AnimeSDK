#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_0_16E4307DCC419505_1368;
class Class_1_2CFFBE92D294C889;
class Class_1_5F4D64A4B97E38F9;
class Class_1_84DA91D3CFCB2E68;
class Class_1_B6441625E3D7D3E0;
class Class_1_E79EE3670D2EC49A;
class Class_1_F248B058F5A06B98;
namespace RPG::Client { class BattleViewModeLightInitData; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleAvatarInfoViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleTeamInfoUltraSkillItemViewModel; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GETSERVANTENTITY_OFFSET UNITYSDK_OFFSET(0xCFD6D60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTAVATARINFO_OFFSET UNITYSDK_OFFSET(0xCFD6C60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTENTITY_OFFSET UNITYSDK_OFFSET(0xCFD6980)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_DECKFULLDESC_OFFSET UNITYSDK_OFFSET(0xCFD6BF0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0xCFD6CA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_LIGHTINITDATA_OFFSET UNITYSDK_OFFSET(0xCFD6BE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0xCFD6CE0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ULTRASKILLS_OFFSET UNITYSDK_OFFSET(0xCFD6D20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__COLLECTULTRASKILLS_OFFSET UNITYSDK_OFFSET(0xCFD6850)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD65E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__QUERYFRIENDENTITIES_OFFSET UNITYSDK_OFFSET(0xCFD6760)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__TRYAPPENDULTRASKILL_OFFSET UNITYSDK_OFFSET(0xCFD6FB0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleTeamInfoFriendTeamViewModel_TypeDefinitionIndex = 79650;

	class FateRinBattleTeamInfoFriendTeamViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleAvatarInfoViewModel* _CurrentAvatarInfo; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* _Entities; // 0x28
		::RPG::Client::BattleViewModeLightInitData* _LightInitData_k__BackingField; // 0x30
		::Class_1_B6441625E3D7D3E0* _Deck; // 0x38
		::Class_0_16E4307DCC419505_1368* _StatusList; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* _UltraSkills; // 0x48

		::System::Void _ctor(::Class_1_B6441625E3D7D3E0* a1, ::RPG::Client::BattleViewModeLightInitData* a2, ::RPG::GameCore::EntityManager* a3, ::Class_1_84DA91D3CFCB2E68* a4, ::Class_1_F248B058F5A06B98* a5, ::Class_1_5F4D64A4B97E38F9* a6, ::Class_1_E79EE3670D2EC49A* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6441625E3D7D3E0*, ::RPG::Client::BattleViewModeLightInitData*, ::RPG::GameCore::EntityManager*, ::Class_1_84DA91D3CFCB2E68*, ::Class_1_F248B058F5A06B98*, ::Class_1_5F4D64A4B97E38F9*, ::Class_1_E79EE3670D2EC49A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::Client::BattleViewModeLightInitData* get_LightInitData()
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_LIGHTINITDATA_OFFSET))(this);
		}

		::System::String* get_DeckFullDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_DECKFULLDESC_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTENTITY_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleAvatarInfoViewModel* get_CurrentAvatarInfo()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleAvatarInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_CURRENTAVATARINFO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* get_Entities()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ENTITIES_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1368* get_StatusList()
		{
			return ((::Class_0_16E4307DCC419505_1368*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_STATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* get_UltraSkills()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GET_ULTRASKILLS_OFFSET))(this);
		}

		static ::RPG::GameCore::GameEntity* GetServantEntity(::RPG::GameCore::EntityManager* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL_GETSERVANTENTITY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* _QueryFriendEntities(::RPG::GameCore::EntityManager* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__QUERYFRIENDENTITIES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* _CollectUltraSkills(::Class_1_84DA91D3CFCB2E68* a1, ::Class_1_F248B058F5A06B98* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>*(*)(::Class_1_84DA91D3CFCB2E68*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__COLLECTULTRASKILLS_OFFSET))(a1, a2);
		}

		static ::System::Void _TryAppendUltraSkill(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>* a1, ::Class_1_2CFFBE92D294C889* a2, ::Class_1_F248B058F5A06B98* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleTeamInfoUltraSkillItemViewModel*>*, ::Class_1_2CFFBE92D294C889*, ::Class_1_F248B058F5A06B98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLETEAMINFOFRIENDTEAMVIEWMODEL__TRYAPPENDULTRASKILL_OFFSET))(a1, a2, a3);
		}
	};
}
