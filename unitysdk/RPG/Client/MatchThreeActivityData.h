#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class MatchThreeModule; }

#define RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0xA81B390)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xA81B5D0)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA81B330)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA81B2D0)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xA81B480)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xA81B6A0)
#define RPG_CLIENT_MATCHTHREEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA81B630)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeActivityData_TypeDefinitionIndex = 60610;

	class MatchThreeActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::MatchThreeModule* _Module; // 0xA0

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}
	};
}
