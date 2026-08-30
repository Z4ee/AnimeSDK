#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYHANDLERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x191C0090)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_NotifyHandlerInfo_TypeDefinitionIndex = 59432;

	class NotifyManager_NotifyHandlerInfo : public ::System::Object
	{
	public:
		::RPG::Client::NotifyHandler* Handler; // 0x10
		::RPG::Client::NotifyGroup Group; // 0x18
		::RPG::Client::NotifyType Type; // 0x1C
		::System::Boolean Add; // 0x20

		::System::Void _ctor(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYHANDLERINFO__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
