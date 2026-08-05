#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_4B3401D95328DA92_STRUCT_2_37958527F6A3CE6D_EQUALS_OFFSET UNITYSDK_OFFSET(0x7FE9F0)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Struct_2_37958527F6A3CE6D_TypeDefinitionIndex = 68335;

struct alignas(8) Class_2_4B3401D95328DA92_Struct_2_37958527F6A3CE6D
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x1C
	::System::Boolean Field_2_7; // 0x20
	::System::Boolean Field_2_6; // 0x21
	::MoleMole::Battle::Entity* Field_2_5; // 0x28

	::System::Boolean Equals(::Class_2_4B3401D95328DA92_Struct_2_37958527F6A3CE6D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4B3401D95328DA92_Struct_2_37958527F6A3CE6D))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_STRUCT_2_37958527F6A3CE6D_EQUALS_OFFSET))(this, a1);
	}
};
