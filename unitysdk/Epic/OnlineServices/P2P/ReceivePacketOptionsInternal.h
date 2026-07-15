#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class ReceivePacketOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AADF40)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AADEC0)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3AADD40)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_MAXDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AADEB0)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x3AADE00)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ReceivePacketOptionsInternal_TypeDefinitionIndex = 43413;

	struct alignas(8) ReceivePacketOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_MaxDataSizeBytes; // 0x20
		::System::IntPtr m_RequestedChannel; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_MaxDataSizeBytes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_MAXDATASIZEBYTES_OFFSET))(this, a1);
		}

		/*
		::System::Void set_RequestedChannel(::System::Nullable_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_REQUESTEDCHANNEL_OFFSET))(this, a1);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::P2P::ReceivePacketOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ReceivePacketOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
