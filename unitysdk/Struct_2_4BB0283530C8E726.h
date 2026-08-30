#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define STRUCT_2_4BB0283530C8E726_METHOD_2_3FE85484AE864CFE_OFFSET UNITYSDK_OFFSET(0x3B01610)

inline static constexpr unsigned int Struct_2_4BB0283530C8E726_TypeDefinitionIndex = 56426;

struct alignas(8) Struct_2_4BB0283530C8E726
{
	::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x10
	::Class_2_1DB6C02CA182EEBA* EKEFPDFCNOM; // 0x18
	::RPG::GameCore::TurnBasedModifierEvent JGFGGNNJCFC; // 0x20
	::System::UInt32 AONNBKBPCMF; // 0x24

	::System::Boolean Method_2_3FE85484AE864CFE(::RPG::GameCore::TurnBasedModifierInstance* a1, ::Class_2_1DB6C02CA182EEBA* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_2_1DB6C02CA182EEBA*))((::PBYTE)hIl2Cpp + STRUCT_2_4BB0283530C8E726_METHOD_2_3FE85484AE864CFE_OFFSET))(this, a1, a2);
	}
};
