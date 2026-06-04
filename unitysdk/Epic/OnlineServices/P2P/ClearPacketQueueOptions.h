#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30ACA0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0xA30ACC0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xA30ACE0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30ACB0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0xA30ACD0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xA30ACF0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA30AD00)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ClearPacketQueueOptions_TypeDefinitionIndex = 42506;

	class ClearPacketQueueOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_SET_REMOTEUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONS_SET_SOCKETID_OFFSET))(this, a1);
		}
	};
}
