#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace RPG::GameCore { class ChenLingSoldierLevelRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CC42D20)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_ATKSPD_OFFSET UNITYSDK_OFFSET(0x1CC43490)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_ATK_OFFSET UNITYSDK_OFFSET(0x1CC433D0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_BATTLESCOREFIX_OFFSET UNITYSDK_OFFSET(0x1CC35320)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_CRTDMG_OFFSET UNITYSDK_OFFSET(0x1CC435B0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_CRT_OFFSET UNITYSDK_OFFSET(0x1CC43550)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CC35A20)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_HP_OFFSET UNITYSDK_OFFSET(0x1CC43430)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CC42B90)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_MOVESPD_OFFSET UNITYSDK_OFFSET(0x1CC434F0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_NUM_OFFSET UNITYSDK_OFFSET(0x1CC43610)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x1CC42B70)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_UNITIDLIST_OFFSET UNITYSDK_OFFSET(0x1CC35630)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET__MAXLEVELUNITCONFIG_OFFSET UNITYSDK_OFFSET(0x1CC42C20)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1CC42BB0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CC42BA0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x1CC42B80)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC42B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSoldierLevelConfig_TypeDefinitionIndex = 61547;

	class ChenLingBattleSoldierLevelConfig : public ::System::Object
	{
	public:
		// static const ::System::String* FormationPrefabPath; // 0x0
		::System::UInt32 _SoldierID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::GameCore::ChenLingSoldierLevelRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSoldierLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_SOLDIERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingSoldierLevelRow* get__Row()
		{
			return ((::RPG::GameCore::ChenLingSoldierLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleSoldierUnitConfig* get__MaxLevelUnitConfig()
		{
			return ((::RPG::Client::ChenLingBattleSoldierUnitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET__MAXLEVELUNITCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>* GetAllDisplayProperties()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GETALLDISPLAYPROPERTIES_OFFSET))(this);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_NUM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Atk()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_ATK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Hp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_HP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_AtkSpd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_ATKSPD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MoveSpd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_MOVESPD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Crt()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_CRT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CrtDMG()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_CRTDMG_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnitIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_UNITIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_FormationType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_FORMATIONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BattleScoreFix()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_BATTLESCOREFIX_OFFSET))(this);
		}
	};
}
