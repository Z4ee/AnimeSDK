#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RspHandler; }

#define RPG_CLIENT_NOTIFYMANAGER_RSPHANDLERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18269410)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_RspHandlerInfo_TypeDefinitionIndex = 56646;

	class NotifyManager_RspHandlerInfo : public ::System::Object
	{
	public:
		::RPG::Client::RspHandler* Handler; // 0x10
		::System::Boolean Add; // 0x18
		::System::UInt16 CmdID; // 0x1A
		::RPG::Client::NotifyGroup Group; // 0x1C

		::System::Void _ctor(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::RPG::Client::RspHandler* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_RSPHANDLERINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
