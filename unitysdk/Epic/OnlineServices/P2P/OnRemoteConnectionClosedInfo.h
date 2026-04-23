#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/ConnectionClosedReason.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnRemoteConnectionClosedInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8EDFD90)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8EDFCF0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EDFD10)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REASON_OFFSET UNITYSDK_OFFSET(0x8EDFD70)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x8EDFD30)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x8EDFD50)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8EE0480)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8EDFD00)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8EDFD20)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_OFFSET UNITYSDK_OFFSET(0x8EDFDA0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REASON_OFFSET UNITYSDK_OFFSET(0x8EDFD80)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x8EDFD40)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x8EDFD60)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE05B0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnRemoteConnectionClosedInfo_TypeDefinitionIndex = 41740;

	class OnRemoteConnectionClosedInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28
		::Epic::OnlineServices::P2P::ConnectionClosedReason _Reason_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_SOCKETID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::P2P::ConnectionClosedReason get_Reason()
		{
			return ((::Epic::OnlineServices::P2P::ConnectionClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::Epic::OnlineServices::P2P::ConnectionClosedReason value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ConnectionClosedReason))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REASON_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_1_OFFSET))(this, other);
		}
	};
}
