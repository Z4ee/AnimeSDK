#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_SILVERWOLFACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xA4823E0)
#define RPG_CLIENT_SILVERWOLFACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA4815F0)
#define RPG_CLIENT_SILVERWOLFACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4815E0)
#define RPG_CLIENT_SILVERWOLFACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xA4827C0)
#define RPG_CLIENT_SILVERWOLFACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA482750)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfActivityData_TypeDefinitionIndex = 50024;

	class SilverWolfActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET))(this);
		}
	};
}
