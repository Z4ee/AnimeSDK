#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MAINMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xCF01340)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xCF01360)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MONSTERDATAS_OFFSET UNITYSDK_OFFSET(0xCF01320)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MONSTERWEAKPOINT_OFFSET UNITYSDK_OFFSET(0xCF01380)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MAINMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xCF01350)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xCF01370)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MONSTERDATAS_OFFSET UNITYSDK_OFFSET(0xCF01330)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MONSTERWEAKPOINT_OFFSET UNITYSDK_OFFSET(0xCF01390)
#define RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF013A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRouteMonstersViewModel_TypeDefinitionIndex = 64013;

	class ExpeditionBattleRouteMonstersViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* _MonsterDatas_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _MonsterWeakPoint_k__BackingField; // 0x18
		::System::String* _MainMonsterIconPath_k__BackingField; // 0x20
		::RPG::Client::MonsterData* _MainMonsterData_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* get_MonsterDatas()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MONSTERDATAS_OFFSET))(this);
		}

		::System::Void set_MonsterDatas(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MONSTERDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* get_MainMonsterData()
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MAINMONSTERDATA_OFFSET))(this);
		}

		::System::Void set_MainMonsterData(::RPG::Client::MonsterData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MAINMONSTERDATA_OFFSET))(this, a1);
		}

		::System::String* get_MainMonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET))(this);
		}

		::System::Void set_MainMonsterIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_MonsterWeakPoint()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_GET_MONSTERWEAKPOINT_OFFSET))(this);
		}

		::System::Void set_MonsterWeakPoint(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEROUTEMONSTERSVIEWMODEL_SET_MONSTERWEAKPOINT_OFFSET))(this, a1);
		}
	};
}
