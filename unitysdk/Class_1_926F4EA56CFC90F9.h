#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_926F4EA56CFC90F9__CTOR_OFFSET UNITYSDK_OFFSET(0xE5D9390)

inline static constexpr unsigned int Class_1_926F4EA56CFC90F9_TypeDefinitionIndex = 79274;

class Class_1_926F4EA56CFC90F9 : public ::System::Object
{
public:
	::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x10

	::System::Void _ctor(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_926F4EA56CFC90F9__CTOR_OFFSET))(this, a1);
	}
};
