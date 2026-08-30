#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class AddNotifyIncomingPacketQueueFullOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5DB80)
#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EC0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyIncomingPacketQueueFullOptionsInternal_TypeDefinitionIndex = 45542;

	struct alignas(4) AddNotifyIncomingPacketQueueFullOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
