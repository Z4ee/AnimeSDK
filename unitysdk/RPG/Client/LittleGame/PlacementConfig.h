#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/WeightConfig.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_PLACEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C593AF0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PlacementConfig_TypeDefinitionIndex = 40149;

	class PlacementConfig : public ::RPG::Client::LittleGame::WeightConfig
	{
	public:
		::System::String* Asset; // 0x18
		::System::Single BoundSize; // 0x20
		::System::Single Speed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PLACEMENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
