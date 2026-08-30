#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DControllerBase_NotifyHandlerBinding_TypeDefinitionIndex = 72917;

	struct alignas(8) UI3DControllerBase_NotifyHandlerBinding
	{
		::RPG::Client::NotifyGroup Group; // 0x10
		::RPG::Client::NotifyType Type; // 0x14
		::RPG::Client::NotifyHandler* Handler; // 0x18
	};
}
