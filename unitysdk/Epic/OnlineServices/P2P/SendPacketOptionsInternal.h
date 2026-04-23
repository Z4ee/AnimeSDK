#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/PacketReliability.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SendPacketOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x599E0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x59970)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_ALLOWDELAYEDDELIVERY_OFFSET UNITYSDK_OFFSET(0x598A0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x59820)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x59830)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x595D0)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x59960)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_RELIABILITY_OFFSET UNITYSDK_OFFSET(0x59950)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x59690)
#define EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x59750)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SendPacketOptionsInternal_TypeDefinitionIndex = 41752;

	struct alignas(8) SendPacketOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RemoteUserId; // 0x20
		::System::IntPtr m_SocketId; // 0x28
		::System::Byte m_Channel; // 0x30
		::System::UInt32 m_DataLengthBytes; // 0x34
		::System::IntPtr m_Data; // 0x38
		::System::Int32 m_AllowDelayedDelivery; // 0x40
		::Epic::OnlineServices::P2P::PacketReliability m_Reliability; // 0x44

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, value);
		}

		::System::Void set_Channel(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_CHANNEL_OFFSET))(this, value);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::System::Void set_AllowDelayedDelivery(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_ALLOWDELAYEDDELIVERY_OFFSET))(this, value);
		}

		::System::Void set_Reliability(::Epic::OnlineServices::P2P::PacketReliability value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::PacketReliability))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_RELIABILITY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::SendPacketOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SendPacketOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SENDPACKETOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
