#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_0244180E10798511_STRUCT_2_37958527F6A3CE6D_EQUALS_OFFSET UNITYSDK_OFFSET(0x80CC20)

inline static constexpr unsigned int Class_2_0244180E10798511_Struct_2_37958527F6A3CE6D_TypeDefinitionIndex = 43991;

struct alignas(8) Class_2_0244180E10798511_Struct_2_37958527F6A3CE6D
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::Boolean Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x21
	::MoleMole::Battle::Entity* Field_2_4; // 0x28

	::System::Boolean Equals(::Class_2_0244180E10798511_Struct_2_37958527F6A3CE6D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0244180E10798511_Struct_2_37958527F6A3CE6D))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_STRUCT_2_37958527F6A3CE6D_EQUALS_OFFSET))(this, a1);
	}
};
