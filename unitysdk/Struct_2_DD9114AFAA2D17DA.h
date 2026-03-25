#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define STRUCT_2_DD9114AFAA2D17DA_METHOD_2_983A57277D0921EF_OFFSET UNITYSDK_OFFSET(0x148F820)

inline static constexpr unsigned int Struct_2_DD9114AFAA2D17DA_TypeDefinitionIndex = 44568;

struct alignas(8) Struct_2_DD9114AFAA2D17DA
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::RPG::GameCore::TeamTypeMask Field_2_1; // 0x18
	::RPG::GameCore::EntityTypeMask Field_2_2; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x28

	::System::Boolean Method_2_983A57277D0921EF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_DD9114AFAA2D17DA_METHOD_2_983A57277D0921EF_OFFSET))(this, a1);
	}
};
