#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x18A9ED10)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x18A9EBE0)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9EBD0)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVENEWUNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0x18A9EE90)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x18A9EDE0)
#define RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET UNITYSDK_OFFSET(0x18A9F050)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionActivityData_TypeDefinitionIndex = 58849;

	class ActivityTelevisionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void _OnActivityEndedCustom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__ONACTIVITYENDEDCUSTOM_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean _HaveNewUnlockLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVENEWUNLOCKLEVEL_OFFSET))(this);
		}

		::System::Boolean _HaveRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONACTIVITYDATA__HAVEREWARDNOTTAKEN_OFFSET))(this);
		}
	};
}
