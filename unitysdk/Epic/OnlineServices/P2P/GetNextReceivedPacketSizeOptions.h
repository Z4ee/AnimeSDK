#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EDAAD0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x8EDAAF0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EDAAE0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x8EDAB00)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EDAB10)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetNextReceivedPacketSizeOptions_TypeDefinitionIndex = 41713;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Byte> get_RequestedChannel()
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_GET_REQUESTEDCHANNEL_OFFSET))(this);
		}

		::System::Void set_RequestedChannel(::System::Nullable_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONS_SET_REQUESTEDCHANNEL_OFFSET))(this, value);
		}
	};
}
