#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8DC7A08E87B5FCD8__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

inline static constexpr unsigned int Struct_2_8DC7A08E87B5FCD8_TypeDefinitionIndex = 58959;

struct alignas(4) Struct_2_8DC7A08E87B5FCD8
{
	::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x10

	::System::Void _ctor(::RPG::GameCore::TutorialB51RacingGameButtonType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialB51RacingGameButtonType))((::PBYTE)hIl2Cpp + STRUCT_2_8DC7A08E87B5FCD8__CTOR_OFFSET))(this, a1);
	}
};
