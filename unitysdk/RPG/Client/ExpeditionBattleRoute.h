#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_76F6F6F3F603AF89;
class Class_1_97E659ED8D5D259C_12;
namespace RPG::Client { class ExpeditionBattleBuff; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xCF011A0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_BUFF_OFFSET UNITYSDK_OFFSET(0xCF01270)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_ID_OFFSET UNITYSDK_OFFSET(0xCF01180)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_LEVELIDS_OFFSET UNITYSDK_OFFSET(0xCF011C0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_LEVELS_OFFSET UNITYSDK_OFFSET(0xCF01260)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MAINMONSTERID_OFFSET UNITYSDK_OFFSET(0xCF01200)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xCF01290)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MONSTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCF01220)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MONSTERWEAKPOINT_OFFSET UNITYSDK_OFFSET(0xCF01240)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_ROUTERECORD_OFFSET UNITYSDK_OFFSET(0xCF012B0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_SPECIALAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xCF011E0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xCF011B0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_BUFF_OFFSET UNITYSDK_OFFSET(0xCF01280)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_ID_OFFSET UNITYSDK_OFFSET(0xCF01190)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_LEVELIDS_OFFSET UNITYSDK_OFFSET(0xCF011D0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MAINMONSTERID_OFFSET UNITYSDK_OFFSET(0xCF01210)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xCF012A0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MONSTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCF01230)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MONSTERWEAKPOINT_OFFSET UNITYSDK_OFFSET(0xCF01250)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_ROUTERECORD_OFFSET UNITYSDK_OFFSET(0xCF012C0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_SPECIALAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xCF011F0)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xCF012D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRoute_TypeDefinitionIndex = 63911;

	class ExpeditionBattleRoute : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _LevelIDs_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _MonsterWeakPoint_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _SpecialAvatarIDList_k__BackingField; // 0x20
		::Class_1_76F6F6F3F603AF89* _RouteRecord_k__BackingField; // 0x28
		::System::String* _MonsterFigurePath_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_12*>* _Levels_k__BackingField; // 0x38
		::RPG::Client::ExpeditionBattleBuff* _Buff_k__BackingField; // 0x40
		::System::UInt32 _MainMonsterID_k__BackingField; // 0x48
		::System::UInt32 _MapID_k__BackingField; // 0x4C
		::System::UInt32 _BuffID_k__BackingField; // 0x50
		::System::UInt32 _ID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_BUFFID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_LevelIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_LEVELIDS_OFFSET))(this);
		}

		::System::Void set_LevelIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_LEVELIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialAvatarIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_SPECIALAVATARIDLIST_OFFSET))(this);
		}

		::System::Void set_SpecialAvatarIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_SPECIALAVATARIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MAINMONSTERID_OFFSET))(this);
		}

		::System::Void set_MainMonsterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MAINMONSTERID_OFFSET))(this, a1);
		}

		::System::String* get_MonsterFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MONSTERFIGUREPATH_OFFSET))(this);
		}

		::System::Void set_MonsterFigurePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MONSTERFIGUREPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_MonsterWeakPoint()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MONSTERWEAKPOINT_OFFSET))(this);
		}

		::System::Void set_MonsterWeakPoint(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MONSTERWEAKPOINT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_12*>* get_Levels()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_LEVELS_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleBuff* get_Buff()
		{
			return ((::RPG::Client::ExpeditionBattleBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_BUFF_OFFSET))(this);
		}

		::System::Void set_Buff(::RPG::Client::ExpeditionBattleBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_BUFF_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_MAPID_OFFSET))(this, a1);
		}

		::Class_1_76F6F6F3F603AF89* get_RouteRecord()
		{
			return ((::Class_1_76F6F6F3F603AF89*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_GET_ROUTERECORD_OFFSET))(this);
		}

		::System::Void set_RouteRecord(::Class_1_76F6F6F3F603AF89* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76F6F6F3F603AF89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTE_SET_ROUTERECORD_OFFSET))(this, a1);
		}
	};
}
