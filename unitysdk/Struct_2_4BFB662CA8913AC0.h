#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5469D397DAE62876;
namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_4BFB662CA8913AC0_METHOD_2_2AC5DC31C38B346F_OFFSET UNITYSDK_OFFSET(0x90807A0)

inline static constexpr unsigned int Struct_2_4BFB662CA8913AC0_TypeDefinitionIndex = 49565;

struct alignas(8) Struct_2_4BFB662CA8913AC0
{
	::Class_1_5469D397DAE62876* Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20

	static ::Struct_2_4BFB662CA8913AC0 Method_2_2AC5DC31C38B346F(::Class_1_5469D397DAE62876* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Struct_2_4BFB662CA8913AC0(*)(::Class_1_5469D397DAE62876*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_4BFB662CA8913AC0_METHOD_2_2AC5DC31C38B346F_OFFSET))(a1, a2, a3);
	}
};
