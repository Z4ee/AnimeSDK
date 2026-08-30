#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MONSTERPHASECHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xD8BE090)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterPhaseChangeParams_TypeDefinitionIndex = 72233;

	class MonsterPhaseChangeParams : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::UInt32 PrePhase; // 0x18
		::System::UInt32 CurPhase; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERPHASECHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
