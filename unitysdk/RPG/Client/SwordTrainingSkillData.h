#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class SwordTrainingSkillRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLDATA_CLEARSERVERSTATE_OFFSET UNITYSDK_OFFSET(0xA51D050)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA51CF20)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0xA51D9D0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_COST_OFFSET UNITYSDK_OFFSET(0xA51D960)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0xA51DFF0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISSKILLLEARN_OFFSET UNITYSDK_OFFSET(0xA51E050)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xA51D560)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_NEXTSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xA51D870)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA51DE50)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_RARE_OFFSET UNITYSDK_OFFSET(0xA51DB10)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xA51DCF0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLICON_OFFSET UNITYSDK_OFFSET(0xA51DDE0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xA51DC00)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLPOWER_OFFSET UNITYSDK_OFFSET(0xA51C4E0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLRANK_OFFSET UNITYSDK_OFFSET(0xA51D750)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xA51DB80)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_SKILLTYPEID_OFFSET UNITYSDK_OFFSET(0xA51ADC0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET_STATUSADDLIST_OFFSET UNITYSDK_OFFSET(0xA51DA40)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA51D810)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILLALLLEARNED_OFFSET UNITYSDK_OFFSET(0xA51D180)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILL_OFFSET UNITYSDK_OFFSET(0xA51D620)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLCANLEARN_OFFSET UNITYSDK_OFFSET(0xA51D090)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLCONDITIONFINISH_OFFSET UNITYSDK_OFFSET(0xA51D130)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLDISPLAYLEARNBTN_OFFSET UNITYSDK_OFFSET(0xA51D4D0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLRANKARRIVED_OFFSET UNITYSDK_OFFSET(0xA51D350)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_SETSKILLLEARNED_OFFSET UNITYSDK_OFFSET(0xA51D7C0)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA_SET_ISSKILLLEARN_OFFSET UNITYSDK_OFFSET(0xA51E060)
#define RPG_CLIENT_SWORDTRAININGSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA51CFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillData_TypeDefinitionIndex = 50305;

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

		static ::RPG::Client::SwordTrainingSkillData* Create(::System::UInt32 skillID)
		{
			return ((::RPG::Client::SwordTrainingSkillData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_CREATE_OFFSET))(skillID);
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

		::System::Boolean IsPreSkill(::System::UInt32 preSkillID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILL_OFFSET))(this, preSkillID);
		}

		::System::Boolean IsPreSkillAllLearned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISPRESKILLALLLEARNED_OFFSET))(this);
		}

		::System::Boolean IsSkillRankArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_ISSKILLRANKARRIVED_OFFSET))(this);
		}

		::System::Void SetSkillLearned(::System::Boolean isLearned)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_SETSKILLLEARNED_OFFSET))(this, isLearned);
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

		::System::Void set_IsSkillLearn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLDATA_SET_ISSKILLLEARN_OFFSET))(this, value);
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
