#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYHANDLERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xABD9D10)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_NotifyHandlerInfo_TypeDefinitionIndex = 54681;

	class NotifyManager_NotifyHandlerInfo : public ::System::Object
	{
	public:
		::RPG::Client::NotifyHandler* Handler; // 0x10
		::System::Boolean Add; // 0x18
		::RPG::Client::NotifyGroup Group; // 0x1C
		::RPG::Client::NotifyType Type; // 0x20

		::System::Void _ctor(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYHANDLERINFO__CTOR_OFFSET))(this, group, type, handler, add);
		}
	};
}
