#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionClosedOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C41AF0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C41A70)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C418D0)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C41A60)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x3C41990)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyPeerConnectionClosedOptionsInternal_TypeDefinitionIndex = 45544;

	struct alignas(8) AddNotifyPeerConnectionClosedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_SocketId; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYPEERCONNECTIONCLOSEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
