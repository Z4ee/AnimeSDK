#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class ActivityMusicRhythmModule; }

#define RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0x17986530)
#define RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x17986360)
#define RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x179864B0)
#define RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x17986240)
#define RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x179861D0)
#define RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA__HASREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0x17986300)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentMusicRhythmActivityData_TypeDefinitionIndex = 61854;

	class ResidentMusicRhythmActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::ActivityMusicRhythmModule* _MusicRhythmModule; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTMUSICRHYTHMACTIVITYDATA__HASREWARDTOTAKE_OFFSET))(this);
		}
	};
}
