#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class QuestDataRow; }

#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GETREWARDID_OFFSET UNITYSDK_OFFSET(0x1AF8DB40)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x1AF8D8B0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISCLOSE_OFFSET UNITYSDK_OFFSET(0x1AF8DAE0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISFINISHORCLOSE_OFFSET UNITYSDK_OFFSET(0x1AF8D9C0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1AF8DA80)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AF8D8C0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET__QUESTDATA_OFFSET UNITYSDK_OFFSET(0x1AF8D920)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1AF8DBE0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8D870)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLightConeQuestCondition_TypeDefinitionIndex = 61766;

	class ActivityLightConeQuestCondition : public ::System::Object
	{
	public:
		::RPG::GameCore::QuestDataRow* _QuestRow; // 0x10
		::System::UInt32 _ConditionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ConditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_CONDITIONID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISCLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsFinishOrClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET_ISFINISHORCLOSE_OFFSET))(this);
		}

		::System::UInt32 GetRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GETREWARDID_OFFSET))(this);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_TAKEREWARD_OFFSET))(this);
		}

		::RPG::Client::QuestData* get__QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEQUESTCONDITION_GET__QUESTDATA_OFFSET))(this);
		}
	};
}
