#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/ConnectionEstablishedType.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnPeerConnectionEstablishedInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF88790)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF886F0)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_CONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DF88770)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF88710)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x1DF88730)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1DF88750)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF88E80)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF88700)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_CONNECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DF88780)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF88720)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF887A0)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x1DF88740)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1DF88760)
#define EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF88FB0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnPeerConnectionEstablishedInfo_TypeDefinitionIndex = 45578;

	class OnPeerConnectionEstablishedInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28
		::Epic::OnlineServices::P2P::ConnectionEstablishedType _ConnectionType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_REMOTEUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_SOCKETID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::ConnectionEstablishedType get_ConnectionType()
		{
			return ((::Epic::OnlineServices::P2P::ConnectionEstablishedType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GET_CONNECTIONTYPE_OFFSET))(this);
		}

		::System::Void set_ConnectionType(::Epic::OnlineServices::P2P::ConnectionEstablishedType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ConnectionEstablishedType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_CONNECTIONTYPE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONPEERCONNECTIONESTABLISHEDINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
