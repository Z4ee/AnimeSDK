#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/ConnectionClosedReason.h"
#include "unitysdk/Epic/OnlineServices/P2P/OnRemoteConnectionClosedInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3B26D0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB3B2630)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3B2650)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REASON_OFFSET UNITYSDK_OFFSET(0xB3B26B0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0xB3B2670)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xB3B2690)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB3B2DC0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB3B2640)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB3B2660)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_OFFSET UNITYSDK_OFFSET(0xB3B26E0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REASON_OFFSET UNITYSDK_OFFSET(0xB3B26C0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0xB3B2680)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0xB3B26A0)
#define EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B2EF0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int OnRemoteConnectionClosedInfo_TypeDefinitionIndex = 45586;

	class OnRemoteConnectionClosedInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _RemoteUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
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

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_RemoteUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REMOTEUSERID_OFFSET))(this);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REMOTEUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_SOCKETID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::ConnectionClosedReason get_Reason()
		{
			return ((::Epic::OnlineServices::P2P::ConnectionClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::Epic::OnlineServices::P2P::ConnectionClosedReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ConnectionClosedReason))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_REASON_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ONREMOTECONNECTIONCLOSEDINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
