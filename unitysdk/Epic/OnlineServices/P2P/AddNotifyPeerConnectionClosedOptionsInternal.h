#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionClosedOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E0AA0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9E0A30)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9E0870)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9E0A20)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x9E0930)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyPeerConnectionClosedOptionsInternal_TypeDefinitionIndex = 35480;

	struct alignas(8) AddNotifyPeerConnectionClosedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_SocketId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
