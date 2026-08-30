#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_99CB4E9E61A9B002__CTOR_OFFSET UNITYSDK_OFFSET(0x6BA310)

inline static constexpr unsigned int Struct_2_99CB4E9E61A9B002_TypeDefinitionIndex = 58961;

struct alignas(4) Struct_2_99CB4E9E61A9B002
{
	::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x10
	::System::Boolean AODGNFHAPBL; // 0x14

	::System::Void _ctor(::RPG::GameCore::TutorialB51RacingGameButtonType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialB51RacingGameButtonType, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_99CB4E9E61A9B002__CTOR_OFFSET))(this, a1, a2);
	}
};
