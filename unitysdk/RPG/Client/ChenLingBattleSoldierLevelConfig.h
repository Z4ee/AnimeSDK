#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace RPG::GameCore { class ChenLingSoldierLevelRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GETALLDISPLAYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9FBE510)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_ATKSPD_OFFSET UNITYSDK_OFFSET(0x9FBEC10)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_ATK_OFFSET UNITYSDK_OFFSET(0x9FBEA90)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_BATTLESCOREFIX_OFFSET UNITYSDK_OFFSET(0x9FBF4C0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_CRTDMG_OFFSET UNITYSDK_OFFSET(0x9FBEDF0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_CRT_OFFSET UNITYSDK_OFFSET(0x9FBED90)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_FORMATIONTYPE_OFFSET UNITYSDK_OFFSET(0x9FBF440)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_HP_OFFSET UNITYSDK_OFFSET(0x9FBEB50)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FBE180)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_MOVESPD_OFFSET UNITYSDK_OFFSET(0x9FBECD0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_NUM_OFFSET UNITYSDK_OFFSET(0x9FBEE50)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x9FBE160)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_UNITIDLIST_OFFSET UNITYSDK_OFFSET(0x9FBE490)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET__MAXLEVELUNITCONFIG_OFFSET UNITYSDK_OFFSET(0x9FBE210)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9FBE1A0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FBE190)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x9FBE170)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9FBDF60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSoldierLevelConfig_TypeDefinitionIndex = 56677;

	class ChenLingBattleSoldierLevelConfig : public ::System::Object
	{
	public:
		// static const ::System::String* FormationPrefabPath; // 0x0
		::System::UInt32 _SoldierID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::GameCore::ChenLingSoldierLevelRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSoldierLevelRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_SOLDIERID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERLEVELCONFIG_SET_LEVEL_OFFSET))(this, value);
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
