#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector.h"

namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_C99AB858A13088D7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A947E0)

inline static constexpr unsigned int Class_2_C99AB858A13088D7_1_TypeDefinitionIndex = 49493;

class Class_2_C99AB858A13088D7_1 : public ::RPG::Client::LevelDirector
{
public:
	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7_1__CTOR_OFFSET))(this, a1);
	}
};
