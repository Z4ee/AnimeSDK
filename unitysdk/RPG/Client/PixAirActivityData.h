#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xDB25D60)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xDB25DC0)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xDB25B40)
#define RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWTIMELIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xDB25BD0)
#define RPG_CLIENT_PIXAIRACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB25B20)
#define RPG_CLIENT_PIXAIRACTIVITYDATA__ISSHOWRESIDENTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xDB25CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PixAirActivityData_TypeDefinitionIndex = 61740;

	class PixAirActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::UInt32 _ID; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowTimeLimitRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWTIMELIMITREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowResidentRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIRACTIVITYDATA__ISSHOWRESIDENTREWARDREDDOT_OFFSET))(this);
		}
	};
}
