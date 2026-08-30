#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ROGUENOUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDF049B0)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF04840)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISBTNGOFIRSTTIMESHOW_OFFSET UNITYSDK_OFFSET(0xDF04B80)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISDICEHANDBOOKREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF04D30)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISMAINSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF05260)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISQUESTREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF04F70)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISSTORYUNLOCKREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF04FF0)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISSUBSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF05070)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__REFRESHGUIDESTATUS_OFFSET UNITYSDK_OFFSET(0xDF04850)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousActivityData_TypeDefinitionIndex = 61749;

	class RogueNousActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Boolean _IsGuideOneFinished; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _RefreshGuideStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__REFRESHGUIDESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsBtnGoFirstTimeShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISBTNGOFIRSTTIMESHOW_OFFSET))(this);
		}

		::System::Boolean _IsDiceHandbookRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISDICEHANDBOOKREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsQuestRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISQUESTREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsStoryUnlockRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISSTORYUNLOCKREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsSubStoryRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISSUBSTORYREWARDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsMainStoryRewardAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISMAINSTORYREWARDAVAILABLE_OFFSET))(this);
		}
	};
}
