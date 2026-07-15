#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2264D0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C2264F0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C2264E0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C226500)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C226510)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetNextReceivedPacketSizeOptions_TypeDefinitionIndex = 43377;

	class GetNextReceivedPacketSizeOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::Nullable_1<::System::Byte> _RequestedChannel_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Byte> get_RequestedChannel()
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_REQUESTEDCHANNEL_OFFSET))(this);
		}

		::System::Void set_RequestedChannel(::System::Nullable_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_REQUESTEDCHANNEL_OFFSET))(this, a1);
		}
	};
}
