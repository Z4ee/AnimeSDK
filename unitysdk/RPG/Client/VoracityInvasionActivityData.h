#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xE44F930)
#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE44F920)
#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWPERSONALREWARD_OFFSET UNITYSDK_OFFSET(0xE44F990)
#define RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWUNSEENCONTENT_OFFSET UNITYSDK_OFFSET(0xE44FB10)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionActivityData_TypeDefinitionIndex = 61674;

	class VoracityInvasionActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowPersonalReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWPERSONALREWARD_OFFSET))(this);
		}

		::System::Boolean _IsShowUnseenContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONACTIVITYDATA__ISSHOWUNSEENCONTENT_OFFSET))(this);
		}
	};
}
