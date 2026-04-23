#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_A88C3AAF0DD46F4C_7;
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueTournCocoonConfigRow; }
namespace RPG::GameCore { class RogueTournMiscDisplayRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB1046F0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GENERATEDATA_OFFSET UNITYSDK_OFFSET(0xB104AC0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_BOSSMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xB105110)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB104ED0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYID_OFFSET UNITYSDK_OFFSET(0xB104AA0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0xB105070)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xB104F10)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DROPLIST_OFFSET UNITYSDK_OFFSET(0xB105090)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB105050)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB104EB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB1045C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xB103620)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MAXCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xB1050F0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MONSTERDISPLAYCONFIGARRAY_OFFSET UNITYSDK_OFFSET(0xB104E90)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB104F30)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_PICPATH_OFFSET UNITYSDK_OFFSET(0xB104FF0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0xB105010)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xB105030)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROGUEKEYCOST_OFFSET UNITYSDK_OFFSET(0xB1050D0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB104EF0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_STAMINACOST_OFFSET UNITYSDK_OFFSET(0xB1050B0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0xB104FB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xB104FD0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_ISNEEDUNLOCK_OFFSET UNITYSDK_OFFSET(0xB104E50)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0xB104CE0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_BOSSMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xB105120)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB104EE0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xB104F20)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xB104EC0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB104F00)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB104A90)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONDATA__GETROGUEBOSSMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xB104B10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonData_TypeDefinitionIndex = 62464;

	class RogueTournRelicCocoonData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournCocoonConfigRow* _Row_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournMiscDisplayRow* _DisplayRow_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _BossMonsterDataList_k__BackingField; // 0x20
		::System::UInt32 _Difficulty_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournRelicCocoonData* Create(::System::UInt32 id, ::System::UInt32 difficulty)
		{
			return ((::RPG::Client::RogueTournRelicCocoonData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_CREATE_OFFSET))(id, difficulty);
		}

		::System::Void GenerateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GENERATEDATA_OFFSET))(this);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SETSEEN_OFFSET))(this);
		}

		::System::Boolean IsNeedUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_ISNEEDUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _GetRogueBossMonsterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA__GETROGUEBOSSMONSTERDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournCocoonConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RogueTournCocoonConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RogueTournCocoonConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournCocoonConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::UInt32 get_DisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMiscDisplayRow* get_DisplayRow()
		{
			return ((::RPG::GameCore::RogueTournMiscDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Void set_DisplayRow(::RPG::GameCore::RogueTournMiscDisplayRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiscDisplayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_DISPLAYROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::String* get_PicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_PICPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendDamageTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDDAMAGETYPES_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_EVENTID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DISPLAYITEMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DropList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_DROPLIST_OFFSET))(this);
		}

		::System::Int64 get_StaminaCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_STAMINACOST_OFFSET))(this);
		}

		::System::Int64 get_RogueKeyCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ROGUEKEYCOST_OFFSET))(this);
		}

		::System::UInt32 get_MaxChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MAXCHALLENGECOUNT_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_7*>* get_MonsterDisplayConfigArray()
		{
			return ((::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_MONSTERDISPLAYCONFIGARRAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* get_BossMonsterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_BOSSMONSTERDATALIST_OFFSET))(this);
		}

		::System::Void set_BossMonsterDataList(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_SET_BOSSMONSTERDATALIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONDATA_GET_ISNEW_OFFSET))(this);
		}
	};
}
