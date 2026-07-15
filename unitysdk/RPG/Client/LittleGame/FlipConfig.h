#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_FLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C591520)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int FlipConfig_TypeDefinitionIndex = 40158;

	class FlipConfig : public ::System::Object
	{
	public:
		::System::Single FlipTime; // 0x10
		::System::Single FlipPauseProgress; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FLIPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
