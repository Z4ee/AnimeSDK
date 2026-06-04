#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1009;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC19BDA0)
#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC19BD40)
#define RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0xC19C9D0)
#define RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0xC19C9E0)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET UNITYSDK_OFFSET(0xC19C650)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET UNITYSDK_OFFSET(0xC19BE90)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET UNITYSDK_OFFSET(0xC19C470)
#define RPG_CLIENT_MONSTERRESISTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC19C610)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterResistData_TypeDefinitionIndex = 67078;

	class MonsterResistData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>* _ResistList_k__BackingField; // 0x10

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

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>* _CreateResistList(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_0_16E4307DCC419505_1009*>* _CreateDamageTypeResistDict(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::Class_0_16E4307DCC419505_1009*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>* _CreateStatusResistList(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>*(*)(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>* get_ResistList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET))(this);
		}

		::System::Void set_ResistList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1009*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET))(this, a1);
		}
	};
}
