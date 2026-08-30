#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYCOOLDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49A0D0)

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int RoadRashAbilityCoolDown_TypeDefinitionIndex = 41272;

	class RoadRashAbilityCoolDown : public ::System::Object
	{
	public:
		::System::UInt32 UsableCount; // 0x10
		::System::UInt32 MaxUsableCount; // 0x14
		::System::Single CoolTime; // 0x18
		::System::Single Cooldown; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ROADRASH_ROADRASHABILITYCOOLDOWN__CTOR_OFFSET))(this);
		}
	};
}
