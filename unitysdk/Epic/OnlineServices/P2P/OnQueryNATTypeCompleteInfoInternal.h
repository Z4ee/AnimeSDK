#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/NATType.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x97C160)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_NATTYPE_OFFSET UNITYSDK_OFFSET(0x2B7CC0)
#define EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnQueryNATTypeCompleteInfoInternal_TypeDefinitionIndex = 35519;

	struct alignas(8) OnQueryNATTypeCompleteInfoInternal
	{
		::Epic::OnlineServices::Result m_ResultCode; // 0x10
		::System::IntPtr m_ClientData; // 0x18
		::Epic::OnlineServices::P2P::NATType m_NATType; // 0x20

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::P2P::NATType get_NATType()
		{
			return ((::Epic::OnlineServices::P2P::NATType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONQUERYNATTYPECOMPLETEINFOINTERNAL_GET_NATTYPE_OFFSET))(this);
		}
	};
}
