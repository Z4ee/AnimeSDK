#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xC5258A0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISCLOSE_OFFSET UNITYSDK_OFFSET(0xC525A40)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC5259E0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC5258B0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_MISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC525940)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_MISSIONNAME_OFFSET UNITYSDK_OFFSET(0xC525AA0)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION_GET_TRACKICONPATH_OFFSET UNITYSDK_OFFSET(0xC525B50)
#define RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xC525860)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLightConeMissionCondition_TypeDefinitionIndex = 61675;

	class ActivityLightConeMissionCondition : public ::System::Object
	{
	public:
		::RPG::Client::MainMissionData* _MissionData; // 0x10
		::System::UInt32 _ConditionID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLIGHTCONEMISSIONCONDITION__CTOR_OFFSET))(this, a1);
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
