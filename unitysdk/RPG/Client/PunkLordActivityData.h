#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_PUNKLORDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA236E30)
#define RPG_CLIENT_PUNKLORDACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA236E20)
#define RPG_CLIENT_PUNKLORDACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA236FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordActivityData_TypeDefinitionIndex = 50014;

	class PunkLordActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
