#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RspHandler; }

#define RPG_CLIENT_NOTIFYMANAGER_RSPHANDLERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8D1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_RspHandlerInfo_TypeDefinitionIndex = 47939;

	class NotifyManager_RspHandlerInfo : public ::System::Object
	{
	public:
		::RPG::Client::RspHandler* Handler; // 0x10
		::RPG::Client::NotifyGroup Group; // 0x18
		::System::UInt16 CmdID; // 0x1C
		::System::Boolean Add; // 0x1E

		::System::Void _ctor(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_RSPHANDLERINFO__CTOR_OFFSET))(this, group, cmdID, handler, add);
		}
	};
}
