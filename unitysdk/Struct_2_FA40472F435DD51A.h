#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_5860E4BC039DC782;
namespace MoleMole::Battle { class Entity; }

#define STRUCT_2_FA40472F435DD51A_METHOD_2_01C341A9FEE155B0_OFFSET UNITYSDK_OFFSET(0x70E630)

inline static constexpr unsigned int Struct_2_FA40472F435DD51A_TypeDefinitionIndex = 62471;

struct alignas(8) Struct_2_FA40472F435DD51A
{
	::Class_1_5860E4BC039DC782* Field_2_0; // 0x10

	::MoleMole::Battle::Entity* Method_2_01C341A9FEE155B0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FA40472F435DD51A_METHOD_2_01C341A9FEE155B0_OFFSET))(this);
	}
};
