#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class ReceivePacketOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x594A0)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x59430)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x592B0)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_MAXDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x59420)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x59370)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ReceivePacketOptionsInternal_TypeDefinitionIndex = 41749;

	struct alignas(8) ReceivePacketOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_MaxDataSizeBytes; // 0x20
		::System::IntPtr m_RequestedChannel; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_MaxDataSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_MAXDATASIZEBYTES_OFFSET))(this, value);
		}

		/*
		::System::Void set_RequestedChannel(::System::Nullable_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_REQUESTEDCHANNEL_OFFSET))(this, value);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::P2P::ReceivePacketOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ReceivePacketOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
