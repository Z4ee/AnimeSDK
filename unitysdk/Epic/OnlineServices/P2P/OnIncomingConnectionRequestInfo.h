#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnIncomingConnectionRequestInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1D38BF30)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D38BEB0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D38BED0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x1D38BEF0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1D38BF10)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1D38C270)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1D38BEC0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D38BEE0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_OFFSET UNITYSDK_OFFSET(0x1D38BF40)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x1D38BF00)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1D38BF20)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D38C3B0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingConnectionRequestInfo_TypeDefinitionIndex = 36165;

	class OnIncomingConnectionRequestInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x28

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
