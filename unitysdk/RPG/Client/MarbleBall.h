#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_07B74073C7F8D5A1;
class Class_1_2FEB0D469BFEA77C;
class Class_1_4A42FCB6B3DCAEBA;
class Class_1_6CDB7667E9681B58;
namespace RPG::Client { class MarbleSkill; }
namespace RPG::Client { class PetMarbleSkill; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MARBLEBALL_GETPETMARBLESKILLS_OFFSET UNITYSDK_OFFSET(0xD5600B0)
#define RPG_CLIENT_MARBLEBALL_GETSKILLS_OFFSET UNITYSDK_OFFSET(0xD55FC40)
#define RPG_CLIENT_MARBLEBALL_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xD55FB00)
#define RPG_CLIENT_MARBLEBALL_GET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xD55F880)
#define RPG_CLIENT_MARBLEBALL_GET_HEALTH_OFFSET UNITYSDK_OFFSET(0xD55FA60)
#define RPG_CLIENT_MARBLEBALL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD55F7E0)
#define RPG_CLIENT_MARBLEBALL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD55F6A0)
#define RPG_CLIENT_MARBLEBALL_GET_ISPETMARBLE_OFFSET UNITYSDK_OFFSET(0xD55F650)
#define RPG_CLIENT_MARBLEBALL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD55F740)
#define RPG_CLIENT_MARBLEBALL_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xD55FBA0)
#define RPG_CLIENT_MARBLEBALL_GET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0xD55F9C0)
#define RPG_CLIENT_MARBLEBALL_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xD55F920)
#define RPG_CLIENT_MARBLEBALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD55F4A0)
#define RPG_CLIENT_MARBLEBALL__CTOR_OFFSET UNITYSDK_OFFSET(0xD55F490)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBall_TypeDefinitionIndex = 65800;

	class MarbleBall : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_LEVEL = 0x3; // 0x0
		::Class_1_6CDB7667E9681B58* _PetViewRow; // 0x10
		::RPG::GameCore::MarbleSealRow* _Row; // 0x18
		::Class_1_2FEB0D469BFEA77C* _PetSkillRow; // 0x20
		::Class_1_4A42FCB6B3DCAEBA* _PetPropertyRow; // 0x28
		::Class_1_07B74073C7F8D5A1* _PetRow; // 0x30

		::System::Void _ctor(::RPG::GameCore::MarbleSealRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Class_1_07B74073C7F8D5A1* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_07B74073C7F8D5A1*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsPetMarble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ISPETMARBLE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_EnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ENEMYICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallEnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_SMALLENEMYICONPATH_OFFSET))(this);
		}

		::System::Int32 get_Health()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_HEALTH_OFFSET))(this);
		}

		::System::Int32 get_Attack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_ATTACK_OFFSET))(this);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MarbleSkill*>* GetSkills(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MarbleSkill*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GETSKILLS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PetMarbleSkill*>* GetPetMarbleSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PetMarbleSkill*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL_GETPETMARBLESKILLS_OFFSET))(this);
		}
	};
}
