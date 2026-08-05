#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionRequestOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B6A10)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9B69A0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9B67E0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9B6990)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x9B68A0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyPeerConnectionRequestOptionsInternal_TypeDefinitionIndex = 36143;

	struct alignas(8) AddNotifyPeerConnectionRequestOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_SocketId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
