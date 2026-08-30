#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET UNITYSDK_OFFSET(0xE10FC60)
#define RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xE10FED0)
#define RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE10FE80)
#define RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE10FBB0)
#define RPG_CLIENT_SUMMONACTIVITYDATA__CHECKHASANYNEWSTAGE_OFFSET UNITYSDK_OFFSET(0xE10FDC0)
#define RPG_CLIENT_SUMMONACTIVITYDATA__CHECKISSHOWREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xE10FCD0)
#define RPG_CLIENT_SUMMONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE10FBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int SummonActivityData_TypeDefinitionIndex = 61758;

	class SummonActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyGotoRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWDAILYGOTOREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean _CheckIsShowRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA__CHECKISSHOWREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _CheckHasAnyNewStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUMMONACTIVITYDATA__CHECKHASANYNEWSTAGE_OFFSET))(this);
		}
	};
}
