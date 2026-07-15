#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class ClearPacketQueueOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AABA20)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAB9A0)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3AAB740)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAB990)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_REMOTEUSERID_OFFSET UNITYSDK_OFFSET(0x3AAB800)
#define EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x3AAB8C0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ClearPacketQueueOptionsInternal_TypeDefinitionIndex = 43368;

	struct alignas(8) ClearPacketQueueOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RemoteUserId; // 0x20
		::System::IntPtr m_SocketId; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RemoteUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_REMOTEUSERID_OFFSET))(this, a1);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_SOCKETID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::ClearPacketQueueOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::ClearPacketQueueOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLEARPACKETQUEUEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
