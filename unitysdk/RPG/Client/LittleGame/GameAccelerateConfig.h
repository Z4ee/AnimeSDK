#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_GAMEACCELERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C593A30)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int GameAccelerateConfig_TypeDefinitionIndex = 40154;

	class GameAccelerateConfig : public ::System::Object
	{
	public:
		::System::Single BackGroundLayerSpeedUpStart; // 0x10
		::System::Single BackGroundLayerSpeedUpEnd; // 0x14
		::System::Single EnemyGenRandomIntervalMinBegin; // 0x18
		::System::Single EnemyGenRandomIntervalMinEnd; // 0x1C
		::System::Single EnemyGenRandomIntervalMaxBegin; // 0x20
		::System::Single EnemyGenRandomIntervalMaxEnd; // 0x24
		::System::Collections::Generic::List_1<::System::Single>* OperationSpeedGear; // 0x28
		::System::Single GearTransitionTime; // 0x30
		::System::Single Gear0TransitionTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_GAMEACCELERATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
