#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEBATTLETRANSITIONCLIENTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173BAC20)
#define RPG_GAMECORE_MAZEBATTLETRANSITIONCLIENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173BAE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBattleTransitionClientConfig_TypeDefinitionIndex = 16208;

	class MazeBattleTransitionClientConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MazeToBattleTransitFadeInDuration; // 0x10
		::System::Single MazeToBattleTransitFadeInDurationStoryMode; // 0x14
		::System::Single MazeToBattleTransitFadeInDurationCocoonMode; // 0x18
		::System::Single MazeToBattleTransitFadeOutDuration; // 0x1C
		::System::Single BattleToMazeTransitFadeInDuration; // 0x20
		::System::Single BattleToMazeTransitFadeOutDuration; // 0x24
		::System::Single BattleEncounterHintDelayCloseTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBATTLETRANSITIONCLIENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazeBattleTransitionClientConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeBattleTransitionClientConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBATTLETRANSITIONCLIENTCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
