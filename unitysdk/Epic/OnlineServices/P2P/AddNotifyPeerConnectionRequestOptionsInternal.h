#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionRequestOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAB610)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAB590)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3AAB3F0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAB580)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x3AAB4B0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyPeerConnectionRequestOptionsInternal_TypeDefinitionIndex = 43366;

	struct alignas(8) AddNotifyPeerConnectionRequestOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_SocketId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONREQUESTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
