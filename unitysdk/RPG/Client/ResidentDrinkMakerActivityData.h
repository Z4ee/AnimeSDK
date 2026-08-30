#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class DrinkMakerModule; }

#define RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x17984060)
#define RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x17984010)
#define RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x17983F40)
#define RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17983ED0)
#define RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA__HASREWARD_OFFSET UNITYSDK_OFFSET(0x17983F90)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentDrinkMakerActivityData_TypeDefinitionIndex = 63702;

	class ResidentDrinkMakerActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::Client::DrinkMakerModule* _Module; // 0xA0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean _HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTDRINKMAKERACTIVITYDATA__HASREWARD_OFFSET))(this);
		}
	};
}
