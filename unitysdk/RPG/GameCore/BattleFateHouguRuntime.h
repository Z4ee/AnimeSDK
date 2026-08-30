#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1DB6C02CA182EEBA;

#define RPG_GAMECORE_BATTLEFATEHOUGURUNTIME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B62A8D0)
#define RPG_GAMECORE_BATTLEFATEHOUGURUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62A920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFateHouguRuntime_TypeDefinitionIndex = 56278;

	class BattleFateHouguRuntime : public ::System::Object
	{
	public:
		::Class_2_1DB6C02CA182EEBA* MazeBuffAbilityCache; // 0x10
		::System::UInt32 Count; // 0x18
		::System::UInt32 ConfigID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFATEHOUGURUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEFATEHOUGURUNTIME_DISPOSE_OFFSET))(this);
		}
	};
}
