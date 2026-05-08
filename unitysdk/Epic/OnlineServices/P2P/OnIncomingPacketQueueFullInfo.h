#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnIncomingPacketQueueFullInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x18CDA940)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x18CDA880)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_OVERFLOWPACKETCHANNEL_OFFSET UNITYSDK_OFFSET(0x18CDA900)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_OVERFLOWPACKETLOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDA8E0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_OVERFLOWPACKETSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CDA920)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_PACKETQUEUECURRENTSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CDA8C0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_PACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CDA8A0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x18CDAC90)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x18CDA890)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OFFSET UNITYSDK_OFFSET(0x18CDA950)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OVERFLOWPACKETCHANNEL_OFFSET UNITYSDK_OFFSET(0x18CDA910)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OVERFLOWPACKETLOCALUSERID_OFFSET UNITYSDK_OFFSET(0x18CDA8F0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OVERFLOWPACKETSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CDA930)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_PACKETQUEUECURRENTSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CDA8D0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_PACKETQUEUEMAXSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CDA8B0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDADD0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingPacketQueueFullInfo_TypeDefinitionIndex = 33947;

	class OnIncomingPacketQueueFullInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _OverflowPacketLocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::UInt32 _OverflowPacketSizeBytes_k__BackingField; // 0x20
		::System::Byte _OverflowPacketChannel_k__BackingField; // 0x24
		::System::UInt64 _PacketQueueMaxSizeBytes_k__BackingField; // 0x28
		::System::UInt64 _PacketQueueCurrentSizeBytes_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::UInt64 get_PacketQueueMaxSizeBytes()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_PACKETQUEUEMAXSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_PacketQueueMaxSizeBytes(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_PACKETQUEUEMAXSIZEBYTES_OFFSET))(this, value);
		}

		::System::UInt64 get_PacketQueueCurrentSizeBytes()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_PACKETQUEUECURRENTSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_PacketQueueCurrentSizeBytes(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_PACKETQUEUECURRENTSIZEBYTES_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_OverflowPacketLocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_OVERFLOWPACKETLOCALUSERID_OFFSET))(this);
		}

		::System::Void set_OverflowPacketLocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OVERFLOWPACKETLOCALUSERID_OFFSET))(this, value);
		}

		::System::Byte get_OverflowPacketChannel()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_OVERFLOWPACKETCHANNEL_OFFSET))(this);
		}

		::System::Void set_OverflowPacketChannel(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OVERFLOWPACKETCHANNEL_OFFSET))(this, value);
		}

		::System::UInt32 get_OverflowPacketSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GET_OVERFLOWPACKETSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_OverflowPacketSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OVERFLOWPACKETSIZEBYTES_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGPACKETQUEUEFULLINFO_SET_1_OFFSET))(this, other);
		}
	};
}
