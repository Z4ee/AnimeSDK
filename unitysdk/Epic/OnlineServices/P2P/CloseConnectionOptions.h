#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8ED9D40)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x8ED9D60)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x8ED9D80)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8ED9D50)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x8ED9D70)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x8ED9D90)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED9DA0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int CloseConnectionOptions_TypeDefinitionIndex = 41705;

	class CloseConnectionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONOPTIONS_SET_SOCKETID_OFFSET))(this, value);
		}
	};
}
