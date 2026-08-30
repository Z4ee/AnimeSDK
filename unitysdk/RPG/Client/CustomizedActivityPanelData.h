#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ScheduleData; }

#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xCC90780)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0xCC907C0)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_ISINRESIDENT_OFFSET UNITYSDK_OFFSET(0xCC906B0)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_ISINTIMELIMIT_OFFSET UNITYSDK_OFFSET(0xCC90620)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_RELATEDACTIVITYID_OFFSET UNITYSDK_OFFSET(0xCC90730)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_RELATEDACTIVITY_OFFSET UNITYSDK_OFFSET(0xCC906F0)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xCC905D0)
#define RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC905C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomizedActivityPanelData_TypeDefinitionIndex = 61799;

	class CustomizedActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ScheduleData* _CustomizedScheduleData; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_ISINTIMELIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsInResident()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_ISINRESIDENT_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_RelatedActivity()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_RELATEDACTIVITY_OFFSET))(this);
		}

		::System::UInt32 get_RelatedActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_RELATEDACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMIZEDACTIVITYPANELDATA_GET_ISEARLYACCESSCANUNLOCK_OFFSET))(this);
		}
	};
}
