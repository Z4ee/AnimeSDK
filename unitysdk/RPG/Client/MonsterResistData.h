#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1051;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1955ACE0)
#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1955AC80)
#define RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0x1955BA40)
#define RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0x1955BA50)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET UNITYSDK_OFFSET(0x1955B660)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET UNITYSDK_OFFSET(0x1955ADD0)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET UNITYSDK_OFFSET(0x1955B480)
#define RPG_CLIENT_MONSTERRESISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1955B620)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterResistData_TypeDefinitionIndex = 68522;

	class MonsterResistData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>* _ResistList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonsterResistData* Create(::RPG::GameCore::MonsterRow* a1)
		{
			return ((::RPG::Client::MonsterResistData*(*)(::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::MonsterResistData* Create_1(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1, ::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::RPG::Client::MonsterResistData*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>* _CreateResistList(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_0_16E4307DCC419505_1051*>* _CreateDamageTypeResistDict(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_0_16E4307DCC419505_1051*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>* _CreateStatusResistList(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>*(*)(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>* get_ResistList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET))(this);
		}

		::System::Void set_ResistList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1051*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET))(this, a1);
		}
	};
}
