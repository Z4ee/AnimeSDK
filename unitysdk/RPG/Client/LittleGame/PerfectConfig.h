#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PERFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9E120)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PerfectConfig_TypeDefinitionIndex = 41035;

	class PerfectConfig : public ::System::Object
	{
	public:
		::System::Single Range; // 0x10
		::System::Single Duration; // 0x14
		::System::Single SP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PERFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
