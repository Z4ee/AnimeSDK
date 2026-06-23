#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_DIRECTIONSTRINGCONFIGGROUP_GETCONFIGBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x862840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DirectionStringConfigGroup_TypeDefinitionIndex = 85425;

	struct alignas(8) DirectionStringConfigGroup
	{
		::System::String* upSheetConfig; // 0x10
		::System::String* bmSheetConfig; // 0x18
		::System::String* lfSheetConfig; // 0x20
		::System::String* rtSheetConfig; // 0x28

		::System::String* GetConfigByDirection(::MoleMole::PlayerOnViewState state)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::PlayerOnViewState))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIRECTIONSTRINGCONFIGGROUP_GETCONFIGBYDIRECTION_OFFSET))(this, state);
		}
	};
}
