#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_SPACEZOOACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x196D7680)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x196D79D0)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196D7670)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA__ISCUSTOMSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x196D7A70)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooActivityData_TypeDefinitionIndex = 61755;

	class SpaceZooActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsCustomShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA__ISCUSTOMSHOWREDDOT_OFFSET))(this);
		}
	};
}
