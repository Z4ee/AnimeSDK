#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define STRUCT_2_C172BB26D97249F0_METHOD_2_A9DEEC46A9EA7B23_OFFSET UNITYSDK_OFFSET(0x15A8940)

inline static constexpr unsigned int Struct_2_C172BB26D97249F0_TypeDefinitionIndex = 51302;

struct alignas(8) Struct_2_C172BB26D97249F0
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::RPG::GameCore::TeamTypeMask Field_2_1; // 0x18
	::RPG::GameCore::EntityTypeMask Field_2_2; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x30

	::System::Boolean Method_2_A9DEEC46A9EA7B23(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_C172BB26D97249F0_METHOD_2_A9DEEC46A9EA7B23_OFFSET))(this, a1);
	}
};
