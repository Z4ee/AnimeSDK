#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class ClearPacketQueueOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x906140)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9060D0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x905E50)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9060C0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x905F10)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x905FD0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ClearPacketQueueOptionsInternal_TypeDefinitionIndex = 36145;

	struct alignas(8) ClearPacketQueueOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RemoteUserId; // 0x20
		::System::IntPtr m_SocketId; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_REMOTEUSERID_OFFSET))(this, value);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::ClearPacketQueueOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ClearPacketQueueOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
