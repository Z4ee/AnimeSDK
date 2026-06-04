#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class SwordTrainingSkillRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLDATA_CLEARSERVERSTATE_OFFSET UNITYSDK_OFFSET(0xC9A6E10)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC9A6CE0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xC9A7810)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_COST_OFFSET UNITYSDK_OFFSET(0xC9A77A0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0xC9A7E40)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISSKILLLEARN_OFFSET UNITYSDK_OFFSET(0xC9A7EA0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC9A7320)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_NEXTSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xC9A76B0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xC9A7CA0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_RARE_OFFSET UNITYSDK_OFFSET(0xC9A7950)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xC9A7B40)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLICON_OFFSET UNITYSDK_OFFSET(0xC9A7C30)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xC9A7A40)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLPOWER_OFFSET UNITYSDK_OFFSET(0xC9A61B0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLRANK_OFFSET UNITYSDK_OFFSET(0xC9A7590)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xC9A79C0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLTYPEID_OFFSET UNITYSDK_OFFSET(0xC9A4920)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_STATUSADDLIST_OFFSET UNITYSDK_OFFSET(0xC9A7880)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xC9A7650)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILLALLLEARNED_OFFSET UNITYSDK_OFFSET(0xC9A6FA0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILL_OFFSET UNITYSDK_OFFSET(0xC9A73E0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xC9A6E50)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLCONDITIONFINISH_OFFSET UNITYSDK_OFFSET(0xC9A6EC0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLDISPLAYLEARNBTN_OFFSET UNITYSDK_OFFSET(0xC9A72C0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLRANKARRIVED_OFFSET UNITYSDK_OFFSET(0xC9A7140)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_SETSKILLLEARNED_OFFSET UNITYSDK_OFFSET(0xC9A7600)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_SET_ISSKILLLEARN_OFFSET UNITYSDK_OFFSET(0xC9A7EB0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC9A6DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillData_TypeDefinitionIndex = 57954;

	class SwordTrainingSkillData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PreSkillID; // 0x10
		::Il2CppArray<::System::Single>* _ParamList; // 0x18
		::System::UInt32 SkillID; // 0x20
		::System::Boolean _IsSkillLearn_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingSkillData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingSkillData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_CREATE_OFFSET))(a1);
		}

		::System::Void ClearServerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_CLEARSERVERSTATE_OFFSET))(this);
		}

		::System::Boolean IsSkillCanLearn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLCANLEARN_OFFSET))(this);
		}

		::System::Boolean IsSkillDisplayLearnBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLDISPLAYLEARNBTN_OFFSET))(this);
		}

		::System::Boolean IsSkillConditionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLCONDITIONFINISH_OFFSET))(this);
		}

		::System::Boolean IsPreSkill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILL_OFFSET))(this, a1);
		}

		::System::Boolean IsPreSkillAllLearned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILLALLLEARNED_OFFSET))(this);
		}

		::System::Boolean IsSkillRankArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLRANKARRIVED_OFFSET))(this);
		}

		::System::Void SetSkillLearned(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_SETSKILLLEARNED_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLTYPEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NextSkillIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_NEXTSKILLIDLIST_OFFSET))(this);
		}

		::RPG::GameCore::ItemConfig* get_Cost()
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_COST_OFFSET))(this);
		}

		::System::UInt32 get_Condition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_CONDITION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyValue*>* get_StatusAddList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_STATUSADDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Rare()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_RARE_OFFSET))(this);
		}

		::System::UInt32 get_SkillPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLPOWER_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLTAG_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLDESC_OFFSET))(this);
		}

		::System::String* get_SkillIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLICON_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_ParamList()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_SkillRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLRANK_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISROOT_OFFSET))(this);
		}

		::System::Boolean get_IsSkillLearn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISSKILLLEARN_OFFSET))(this);
		}

		::System::Void set_IsSkillLearn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_SET_ISSKILLLEARN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingSkillRow* get__Row()
		{
			return ((::RPG::GameCore::SwordTrainingSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_GET__ROW_OFFSET))(this);
		}
	};
}
