#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C224A10)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1C224A30)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C224A20)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1C224A40)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C224A50)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyPeerConnectionRequestOptions_TypeDefinitionIndex = 43365;

	class AddNotifyPeerConnectionRequestOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONS_SET_SOCKETID_OFFSET))(this, a1);
		}
	};
}
