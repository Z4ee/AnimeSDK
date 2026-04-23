#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_5D7DC49E6EAC7E42_STRUCT_2_2B48AF9AE7A4107B_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15AA8A0)

inline static constexpr unsigned int Class_3_5D7DC49E6EAC7E42_Struct_2_2B48AF9AE7A4107B_TypeDefinitionIndex = 49719;

struct alignas(8) Class_3_5D7DC49E6EAC7E42_Struct_2_2B48AF9AE7A4107B
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Int32 CompareTo(::Class_3_5D7DC49E6EAC7E42_Struct_2_2B48AF9AE7A4107B a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_5D7DC49E6EAC7E42_Struct_2_2B48AF9AE7A4107B))((::PBYTE)hIl2Cpp + CLASS_3_5D7DC49E6EAC7E42_STRUCT_2_2B48AF9AE7A4107B_COMPARETO_OFFSET))(this, a1);
	}
};
