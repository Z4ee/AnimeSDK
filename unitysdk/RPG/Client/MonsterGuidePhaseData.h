#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterGuideSkillData; }
namespace RPG::GameCore { class MonsterGuidePhaseConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xD8BD440)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD8BD480)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0xD8BD460)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xD8BD450)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xD8BD490)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0xD8BD470)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BD1B0)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA__INITSKILLDATA_OFFSET UNITYSDK_OFFSET(0xD8BD4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterGuidePhaseData_TypeDefinitionIndex = 63212;

	class MonsterGuidePhaseData : public ::System::Object
	{
	public:
		::RPG::GameCore::MonsterGuidePhaseConfigRow* _Row_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>* _SkillList_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>* get_SkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_SKILLLIST_OFFSET))(this);
		}

		::System::Void set_SkillList(::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_SKILLLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterGuidePhaseConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonsterGuidePhaseConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonsterGuidePhaseConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuidePhaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Void _InitSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA__INITSKILLDATA_OFFSET))(this);
		}
	};
}
