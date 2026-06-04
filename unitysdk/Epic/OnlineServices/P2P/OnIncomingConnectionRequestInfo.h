#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnIncomingConnectionRequestInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA30CBA0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA30CB20)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30CB40)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0xA30CB60)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xA30CB80)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA30D220)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA30CB30)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA30CB50)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_OFFSET UNITYSDK_OFFSET(0xA30CBB0)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0xA30CB70)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xA30CB90)
#define EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA30D350)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnIncomingConnectionRequestInfo_TypeDefinitionIndex = 42527;

	class OnIncomingConnectionRequestInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_REMOTEUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_SOCKETID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnIncomingConnectionRequestInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONINCOMINGCONNECTIONREQUESTINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
