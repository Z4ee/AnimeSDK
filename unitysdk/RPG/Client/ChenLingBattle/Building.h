#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_76D768243EB57C1F;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }
namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_CREATE_OFFSET UNITYSDK_OFFSET(0xCAEB750)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0xCAEC270)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETDESC_OFFSET UNITYSDK_OFFSET(0xCAEBC30)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xCAEC1A0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0xCAEBFF0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCAEBBE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCAEC0C0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVELEFFECTID_OFFSET UNITYSDK_OFFSET(0xCAEC160)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCAEBD80)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xCAEC110)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xCAEBDE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCAEBF10)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xCAEC180)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0xCAEBE30)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAEBDD0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SETLEVEL_OFFSET UNITYSDK_OFFSET(0xCAEBAB0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_LEVELEFFECTID_OFFSET UNITYSDK_OFFSET(0xCAEC170)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xCAEC190)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEBA10)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Building_TypeDefinitionIndex = 75869;

	class Building : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBuildingLevelRow* _LevelRow; // 0x10
		::RPG::GameCore::ChenLingBuildingRow* _Row; // 0x18
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x20
		::System::UInt32 _SkillID_k__BackingField; // 0x28
		::System::UInt32 _UniqueID_k__BackingField; // 0x2C
		::System::UInt64 _LevelEffectID_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattle::Building* Create(::Class_1_76D768243EB57C1F* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Building*(*)(::Class_1_76D768243EB57C1F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_CREATE_OFFSET))(a1);
		}

		::System::Void SetLevel(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SETLEVEL_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETDESC_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_UNIQUEID_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingCardType get_CardType()
		{
			return ((::RPG::GameCore::ChenLingCardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CONFIGID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_InitialMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_INITIALMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::UInt64 get_LevelEffectID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVELEFFECTID_OFFSET))(this);
		}

		::System::Void set_LevelEffectID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_LEVELEFFECTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDID_OFFSET))(this);
		}

		::System::UInt32 GetBattleScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETBATTLESCORE_OFFSET))(this);
		}
	};
}
