#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_BAFD362D8FC4BA51_METHOD_2_E812D6FF10E8B583_OFFSET UNITYSDK_OFFSET(0x18DACDC0)

inline static constexpr unsigned int Struct_2_BAFD362D8FC4BA51_TypeDefinitionIndex = 53445;

struct alignas(8) Struct_2_BAFD362D8FC4BA51
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::FixPoint Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28
	::RPG::GameCore::FixPoint Field_2_4; // 0x30
	::RPG::GameCore::FixPoint Field_2_5; // 0x38

	static ::Struct_2_BAFD362D8FC4BA51 Method_2_E812D6FF10E8B583(::Struct_2_BAFD362D8FC4BA51 a1, ::Struct_2_BAFD362D8FC4BA51 a2)
	{
		return ((::Struct_2_BAFD362D8FC4BA51(*)(::Struct_2_BAFD362D8FC4BA51, ::Struct_2_BAFD362D8FC4BA51))((::PBYTE)hIl2Cpp + STRUCT_2_BAFD362D8FC4BA51_METHOD_2_E812D6FF10E8B583_OFFSET))(a1, a2);
	}
};
