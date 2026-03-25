#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0x8F4DD30)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISCLOSE_OFFSET UNITYSDK_OFFSET(0x8F4DF10)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x8F4DEB0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F4DD40)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_MISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8F4DDD0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_MISSIONNAME_OFFSET UNITYSDK_OFFSET(0x8F4DF70)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_TRACKICONPATH_OFFSET UNITYSDK_OFFSET(0x8F4E010)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x8F4DCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLightConeMissionCondition_TypeDefinitionIndex = 50035;

	class ActivityLightConeMissionCondition : public ::System::Object
	{
	public:
		::RPG::Client::MainMissionData* _MissionData; // 0x10
		::System::UInt32 _ConditionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION__CTOR_OFFSET))(this, ID);
		}

		::System::UInt32 get_ConditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_CONDITIONID_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISCLOSE_OFFSET))(this);
		}

		::RPG::Client::TextID get_MissionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_MISSIONNAME_OFFSET))(this);
		}

		::System::String* get_TrackIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_TRACKICONPATH_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_MISSIONDATA_OFFSET))(this);
		}
	};
}
