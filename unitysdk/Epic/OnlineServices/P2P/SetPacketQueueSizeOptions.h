#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_GET_INCOMINGPACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x8EE45B0)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_GET_OUTGOINGPACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x8EE45D0)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_SET_INCOMINGPACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x8EE45C0)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_SET_OUTGOINGPACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x8EE45E0)
#define EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE45F0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SetPacketQueueSizeOptions_TypeDefinitionIndex = 41753;

	class SetPacketQueueSizeOptions : public ::System::Object
	{
	public:
		::System::UInt64 _IncomingPacketQueueMaxSizeBytes_k__BackingField; // 0x10
		::System::UInt64 _OutgoingPacketQueueMaxSizeBytes_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_IncomingPacketQueueMaxSizeBytes()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_GET_INCOMINGPACKETQUEUEMAXSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_IncomingPacketQueueMaxSizeBytes(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_SET_INCOMINGPACKETQUEUEMAXSIZEBYTES_OFFSET))(this, value);
		}

		::System::UInt64 get_OutgoingPacketQueueMaxSizeBytes()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_GET_OUTGOINGPACKETQUEUEMAXSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_OutgoingPacketQueueMaxSizeBytes(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPACKETQUEUESIZEOPTIONS_SET_OUTGOINGPACKETQUEUEMAXSIZEBYTES_OFFSET))(this, value);
		}
	};
}
