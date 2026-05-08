#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnIncomingConnectionRequestInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x19FA40F0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x19FA4070)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19FA4090)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x19FA40B0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x19FA40D0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x19FA4430)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x19FA4080)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19FA40A0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_OFFSET UNITYSDK_OFFSET(0x19FA4100)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x19FA40C0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x19FA40E0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA4570)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingConnectionRequestInfo_TypeDefinitionIndex = 33943;

	class OnIncomingConnectionRequestInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_SOCKETID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_1_OFFSET))(this, other);
		}
	};
}
