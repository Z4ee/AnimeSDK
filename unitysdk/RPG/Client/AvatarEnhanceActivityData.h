#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA_GETSEASONID_OFFSET UNITYSDK_OFFSET(0x911C680)
#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x911C4A0)
#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x911C490)
#define RPG_CLIENT_AVATARENHANCEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x911C9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEnhanceActivityData_TypeDefinitionIndex = 49968;

	class AvatarEnhanceActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA__CTOR_OFFSET))(this, panelID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::UInt32 GetSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA_GETSEASONID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}
