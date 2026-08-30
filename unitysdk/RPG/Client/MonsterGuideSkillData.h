#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonsterGuideSkillConfigRow; }
namespace RPG::GameCore { class MonsterGuideSkillTextConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERGUIDESKILLDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1960D1D0)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1960D210)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA_GET_SKILLTEXTLIST_OFFSET UNITYSDK_OFFSET(0x1960D1F0)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1960D1E0)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1960D220)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA_SET_SKILLTEXTLIST_OFFSET UNITYSDK_OFFSET(0x1960D200)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1960D130)
#define RPG_CLIENT_MONSTERGUIDESKILLDATA__INITSKILLTEXT_OFFSET UNITYSDK_OFFSET(0x1960D230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterGuideSkillData_TypeDefinitionIndex = 63211;

	class MonsterGuideSkillData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideSkillTextConfigRow*>* _SkillTextList_k__BackingField; // 0x10
		::RPG::GameCore::MonsterGuideSkillConfigRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideSkillTextConfigRow*>* get_SkillTextList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideSkillTextConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA_GET_SKILLTEXTLIST_OFFSET))(this);
		}

		::System::Void set_SkillTextList(::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideSkillTextConfigRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterGuideSkillTextConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA_SET_SKILLTEXTLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonsterGuideSkillConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonsterGuideSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonsterGuideSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterGuideSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Void _InitSkillText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERGUIDESKILLDATA__INITSKILLTEXT_OFFSET))(this);
		}
	};
}
