#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/RelayControl.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONS_GET_RELAYCONTROL_OFFSET UNITYSDK_OFFSET(0x1DF8E510)
#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONS_SET_RELAYCONTROL_OFFSET UNITYSDK_OFFSET(0x1DF8E520)
#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8E530)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SetRelayControlOptions_TypeDefinitionIndex = 45603;

	class SetRelayControlOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::RelayControl _RelayControl_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::P2P::RelayControl get_RelayControl()
		{
			return ((::Epic::OnlineServices::P2P::RelayControl(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONS_GET_RELAYCONTROL_OFFSET))(this);
		}

		::System::Void set_RelayControl(::Epic::OnlineServices::P2P::RelayControl a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::RelayControl))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONS_SET_RELAYCONTROL_OFFSET))(this, a1);
		}
	};
}
