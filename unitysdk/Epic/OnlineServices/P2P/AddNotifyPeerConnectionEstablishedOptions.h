#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30A1C0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xA30A1E0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30A1D0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xA30A1F0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA30A200)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyPeerConnectionEstablishedOptions_TypeDefinitionIndex = 42502;

	class AddNotifyPeerConnectionEstablishedOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONESTABLISHEDOPTIONS_SET_SOCKETID_OFFSET))(this, a1);
		}
	};
}
