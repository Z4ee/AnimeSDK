#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDCBF0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PresetConfig_TypeDefinitionIndex = 39351;

	class PresetConfig : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Single BornMile; // 0x14
		::System::Boolean Flip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PRESETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
