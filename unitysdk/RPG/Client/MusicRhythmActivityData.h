#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityMusicRhythmModule; }

#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0x1B717620)
#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1B717840)
#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1B7177C0)
#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1B7174C0)
#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B717450)
#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0x1B717690)
#define RPG_CLIENT_MUSICRHYTHMACTIVITYDATA__ISSHOWNORMALNEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1B717750)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmActivityData_TypeDefinitionIndex = 61735;

	class MusicRhythmActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityMusicRhythmModule* _MusicRhythmModule; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMACTIVITYDATA__ISSHOWNORMALNEWCONTENTREDDOT_OFFSET))(this);
		}
	};
}
