#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class GetPacketQueueInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x58100)
#define EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetPacketQueueInfoOptionsInternal_TypeDefinitionIndex = 41716;

	struct alignas(4) GetPacketQueueInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETPACKETQUEUEINFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
