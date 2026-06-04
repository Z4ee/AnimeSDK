#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_RESIDENTFANTASTICSTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC71E5C0)
#define RPG_CLIENT_RESIDENTFANTASTICSTORYACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC71E5B0)
#define RPG_CLIENT_RESIDENTFANTASTICSTORYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC71E790)

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentFantasticStoryActivityData_TypeDefinitionIndex = 59776;

	class ResidentFantasticStoryActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTFANTASTICSTORYACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTFANTASTICSTORYACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESIDENTFANTASTICSTORYACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
