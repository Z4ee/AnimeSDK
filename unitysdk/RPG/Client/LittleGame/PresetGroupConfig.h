#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PRESETGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16850E80)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PresetGroupConfig_TypeDefinitionIndex = 32796;

	class PresetGroupConfig : public ::System::Object
	{
	public:
		::System::Int32 GroupIndex; // 0x10
		::System::Single BornMile; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PRESETGROUPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
