#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xDA26B20)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDA26A20)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDA269D0)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA__ISSHOWLIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xDA26A80)
#define RPG_CLIENT_PARKOURBALLACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xDA269E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourBallActivityData_TypeDefinitionIndex = 61739;

	class ParkourBallActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowLimitRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURBALLACTIVITYDATA__ISSHOWLIMITREWARDREDDOT_OFFSET))(this);
		}
	};
}
