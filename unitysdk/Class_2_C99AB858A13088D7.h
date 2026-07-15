#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector.h"

namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_C99AB858A13088D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15885930)
#define CLASS_2_C99AB858A13088D7_TICK_OFFSET UNITYSDK_OFFSET(0x158859A0)
#define CLASS_2_C99AB858A13088D7__CTOR_OFFSET UNITYSDK_OFFSET(0x158858F0)

inline static constexpr unsigned int Class_2_C99AB858A13088D7_TypeDefinitionIndex = 56658;

class Class_2_C99AB858A13088D7 : public ::RPG::Client::LevelDirector
{
public:
	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7_TICK_OFFSET))(this, a1);
	}
};
