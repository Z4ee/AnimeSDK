#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_F6DFB2BAE5E8B052_STRUCT_2_2B48AF9AE7A4107B_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3AB9350)

inline static constexpr unsigned int Class_3_F6DFB2BAE5E8B052_Struct_2_2B48AF9AE7A4107B_TypeDefinitionIndex = 54152;

struct alignas(8) Class_3_F6DFB2BAE5E8B052_Struct_2_2B48AF9AE7A4107B
{
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
	::System::Single MNDFOPKBHKP; // 0x18

	::System::Int32 CompareTo(::Class_3_F6DFB2BAE5E8B052_Struct_2_2B48AF9AE7A4107B a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_F6DFB2BAE5E8B052_Struct_2_2B48AF9AE7A4107B))((::PBYTE)hIl2Cpp + CLASS_3_F6DFB2BAE5E8B052_STRUCT_2_2B48AF9AE7A4107B_COMPARETO_OFFSET))(this, a1);
	}
};
