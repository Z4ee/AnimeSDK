#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_WEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCCDC0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int WeightConfig_TypeDefinitionIndex = 39339;

	class WeightConfig : public ::System::Object
	{
	public:
		::System::Single Weight; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_WEIGHTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
