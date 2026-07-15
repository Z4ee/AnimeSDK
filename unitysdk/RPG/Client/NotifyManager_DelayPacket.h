#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_NOTIFYMANAGER_DELAYPACKET__CTOR_OFFSET UNITYSDK_OFFSET(0x18266C30)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_DelayPacket_TypeDefinitionIndex = 56644;

	class NotifyManager_DelayPacket : public ::System::Object
	{
	public:
		::System::Object* Rsp; // 0x10
		::System::UInt32 RetCode; // 0x18
		::System::UInt16 CmdID; // 0x1C

		::System::Void _ctor(::System::UInt16 a1, ::System::UInt32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_DELAYPACKET__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
