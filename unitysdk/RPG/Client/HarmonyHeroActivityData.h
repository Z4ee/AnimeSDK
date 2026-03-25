#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_HARMONYHEROACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x99127E0)
#define RPG_CLIENT_HARMONYHEROACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x9912890)
#define RPG_CLIENT_HARMONYHEROACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x99127D0)
#define RPG_CLIENT_HARMONYHEROACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9912930)
#define RPG_CLIENT_HARMONYHEROACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x99129A0)

namespace RPG::Client
{
	inline static constexpr unsigned int HarmonyHeroActivityData_TypeDefinitionIndex = 49997;

	class HarmonyHeroActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HARMONYHEROACTIVITYDATA___IFIXBASEPROXY_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}
	};
}
