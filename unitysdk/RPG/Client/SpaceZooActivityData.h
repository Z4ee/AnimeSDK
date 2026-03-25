#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_SPACEZOOACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA4A36E0)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA4A3790)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A36D0)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA__ISCUSTOMSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xA4A3870)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA4A3A70)
#define RPG_CLIENT_SPACEZOOACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA4A3AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooActivityData_TypeDefinitionIndex = 50026;

	class SpaceZooActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA__CTOR_OFFSET))(this, ID);
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

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
