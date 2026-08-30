#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameConfig_TypeDefinitionIndex = 75234;

	struct alignas(8) ActivityHipplenGameConfig
	{
		::RPG::GameCore::HipplenMiniGameType GameType; // 0x10
		::System::String* GameJsonPath; // 0x18
	};
}
