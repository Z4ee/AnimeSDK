#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_F4C6CB9A7CE9D3F2;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingBuildingLevelRow; }
namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_CREATE_OFFSET UNITYSDK_OFFSET(0x931E6E0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETBATTLESCORE_OFFSET UNITYSDK_OFFSET(0x931EEB0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GETDESC_OFFSET UNITYSDK_OFFSET(0x931EC00)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x931EE60)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x931ED90)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x931EBE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x931EDE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVELEFFECTID_OFFSET UNITYSDK_OFFSET(0x931EE20)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x931ECC0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x931EE00)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x931ECF0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x931ED50)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x931EE40)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x931ED10)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x931ECE0)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x931EB20)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_LEVELEFFECTID_OFFSET UNITYSDK_OFFSET(0x931EE30)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x931EE50)
#define RPG_CLIENT_CHENLINGBATTLE_BUILDING__CTOR_OFFSET UNITYSDK_OFFSET(0x931EAC0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Building_TypeDefinitionIndex = 62108;

	class Building : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingBuildingRow* _Row; // 0x10
		::RPG::GameCore::ChenLingBuildingLevelRow* _LevelRow; // 0x18
		::RPG::Client::ChenLingBattle::CardConfig* _CardConfig; // 0x20
		::System::UInt32 _UniqueID_k__BackingField; // 0x28
		::System::UInt32 _SkillID_k__BackingField; // 0x2C
		::System::UInt64 _LevelEffectID_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::ChenLingBattle::CardConfig* cardConfig, ::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING__CTOR_OFFSET))(this, cardConfig, uniqueID);
		}

		static ::RPG::Client::ChenLingBattle::Building* Create(::Class_1_F4C6CB9A7CE9D3F2* entityProto)
		{
			return ((::RPG::Client::ChenLingBattle::Building*(*)(::Class_1_F4C6CB9A7CE9D3F2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_CREATE_OFFSET))(entityProto);
		}

		::System::Void SetLevel(::System::UInt32 level, ::System::UInt64 levelEffectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SETLEVEL_OFFSET))(this, level, levelEffectID);
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

		::System::Void set_LevelEffectID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_LEVELEFFECTID_OFFSET))(this, value);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BUILDING_SET_SKILLID_OFFSET))(this, value);
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
