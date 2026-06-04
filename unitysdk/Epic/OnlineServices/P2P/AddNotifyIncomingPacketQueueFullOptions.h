#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA309BB0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int AddNotifyIncomingPacketQueueFullOptions_TypeDefinitionIndex = 42498;

	class AddNotifyIncomingPacketQueueFullOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_ADDNOTIFYINCOMINGPACKETQUEUEFULLOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
