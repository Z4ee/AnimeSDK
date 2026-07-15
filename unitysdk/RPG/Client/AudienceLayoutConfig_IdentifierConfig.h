#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceLayoutConfig_IdentifierConfig_TypeDefinitionIndex = 66076;

	struct alignas(8) AudienceLayoutConfig_IdentifierConfig
	{
		::RPG::GameCore::NPCBodySize bodySize; // 0x10
		::Il2CppArray<::System::String*>* identifiers; // 0x18
	};
}
