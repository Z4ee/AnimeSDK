#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BFB01C0)
#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x1BFB01E0)
#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1BFB0200)
#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BFB01D0)
#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x1BFB01F0)
#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1BFB0210)
#define EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFB0220)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AcceptConnectionOptions_TypeDefinitionIndex = 35475;

	class AcceptConnectionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ACCEPTCONNECTIONOPTIONS_SET_SOCKETID_OFFSET))(this, value);
		}
	};
}
