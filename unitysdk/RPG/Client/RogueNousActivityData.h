#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_ROGUENOUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDF4A530)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF4A3C0)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISBTNGOFIRSTTIMESHOW_OFFSET UNITYSDK_OFFSET(0xDF4A700)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISDICEHANDBOOKREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF4A8B0)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISMAINSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF4AE10)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISQUESTREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF4AB20)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISSTORYUNLOCKREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF4ABA0)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__ISSUBSTORYREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0xDF4AC20)
#define RPG_CLIENT_ROGUENOUSACTIVITYDATA__REFRESHGUIDESTATUS_OFFSET UNITYSDK_OFFSET(0xDF4A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousActivityData_TypeDefinitionIndex = 61658;

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
