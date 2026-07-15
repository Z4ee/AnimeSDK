#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityDestroyWaitReason.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_6C37BA9A5193B5D0_EQUALS_OFFSET UNITYSDK_OFFSET(0x3976D70)

inline static constexpr unsigned int Struct_2_6C37BA9A5193B5D0_TypeDefinitionIndex = 55231;

struct alignas(8) Struct_2_6C37BA9A5193B5D0
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::EntityDestroyWaitReason Field_2_1; // 0x18

	::System::Boolean Equals(::Struct_2_6C37BA9A5193B5D0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6C37BA9A5193B5D0))((::PBYTE)hIl2Cpp + STRUCT_2_6C37BA9A5193B5D0_EQUALS_OFFSET))(this, a1);
	}
};
