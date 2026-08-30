#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/RelayControl.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class SetRelayControlOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x616C0)
#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2210)
#define EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_SET_RELAYCONTROL_OFFSET UNITYSDK_OFFSET(0x2200)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SetRelayControlOptionsInternal_TypeDefinitionIndex = 45604;

	struct alignas(4) SetRelayControlOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::P2P::RelayControl m_RelayControl; // 0x14

		::System::Void set_RelayControl(::Epic::OnlineServices::P2P::RelayControl a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::RelayControl))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_SET_RELAYCONTROL_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::SetRelayControlOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SetRelayControlOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETRELAYCONTROLOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
