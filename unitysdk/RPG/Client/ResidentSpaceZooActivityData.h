#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x173A6050)
#define RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x173A5F20)
#define RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173A5F10)
#define RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA__ISPOINTREWARDFINISH_OFFSET UNITYSDK_OFFSET(0x173A5FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentSpaceZooActivityData_TypeDefinitionIndex = 59020;

	class ResidentSpaceZooActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsPointRewardFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTSPACEZOOACTIVITYDATA__ISPOINTREWARDFINISH_OFFSET))(this);
		}
	};
}
