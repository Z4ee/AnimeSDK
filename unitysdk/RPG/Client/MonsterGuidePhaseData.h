#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterGuideSkillData; }
namespace RPG::GameCore { class MonsterGuidePhaseConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xAACB740)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xAACB780)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0xAACB760)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xAACB750)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xAACB790)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0xAACB770)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAACB2D0)
#define RPG_CLIENT_MONSTERGUIDEPHASEDATA__INITSKILLDATA_OFFSET UNITYSDK_OFFSET(0xAACB580)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterGuidePhaseData_TypeDefinitionIndex = 58160;

	class MonsterGuidePhaseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>* _SkillList_k__BackingField; // 0x10
		::RPG::GameCore::MonsterGuidePhaseConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void _InitSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA__INITSKILLDATA_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>* get_SkillList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_SKILLLIST_OFFSET))(this);
		}

		::System::Void set_SkillList(::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_SKILLLIST_OFFSET))(this, value);
		}

		::RPG::GameCore::MonsterGuidePhaseConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonsterGuidePhaseConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonsterGuidePhaseConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuidePhaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDEPHASEDATA_SET_ROW_OFFSET))(this, value);
		}
	};
}
