#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/ConnectionEstablishedType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x5580)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x57C50)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_CONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CCC0)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x57D60)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x57DD0)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x57E40)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnPeerConnectionEstablishedInfoInternal_TypeDefinitionIndex = 35907;

	struct alignas(8) OnPeerConnectionEstablishedInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RemoteUserId; // 0x20
		::System::IntPtr m_SocketId; // 0x28
		::Epic::OnlineServices::P2P::ConnectionEstablishedType m_ConnectionType; // 0x30

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_REMOTEUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_SOCKETID_OFFSET))(this);
		}

		::Epic::OnlineServices::P2P::ConnectionEstablishedType get_ConnectionType()
		{
			return ((::Epic::OnlineServices::P2P::ConnectionEstablishedType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFOINTERNAL_GET_CONNECTIONTYPE_OFFSET))(this);
		}
	};
}
