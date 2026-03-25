#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA2A0050)
#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A0040)
#define RPG_CLIENT_RELICBOXACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA2A0240)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicBoxActivityPanelData_TypeDefinitionIndex = 54399;

	class RelicBoxActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOXACTIVITYPANELDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
