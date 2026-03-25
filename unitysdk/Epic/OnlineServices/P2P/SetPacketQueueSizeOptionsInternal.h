#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class SetPacketQueueSizeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x591F0)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_INCOMINGPACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x8D10)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xAF90)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_OUTGOINGPACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0xAF80)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SetPacketQueueSizeOptionsInternal_TypeDefinitionIndex = 35928;

	struct alignas(8) SetPacketQueueSizeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt64 m_IncomingPacketQueueMaxSizeBytes; // 0x18
		::System::UInt64 m_OutgoingPacketQueueMaxSizeBytes; // 0x20

		::System::Void set_IncomingPacketQueueMaxSizeBytes(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_INCOMINGPACKETQUEUEMAXSIZEBYTES_OFFSET))(this, value);
		}

		::System::Void set_OutgoingPacketQueueMaxSizeBytes(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_OUTGOINGPACKETQUEUEMAXSIZEBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
