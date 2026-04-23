#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_24193089A4D2255F;
class Class_3_401EFD0D9B10F234;
namespace RPG::GameCore { class TaskContext; }

#define STRUCT_2_7CAA93E3FEB7B3D6_EQUALS_OFFSET UNITYSDK_OFFSET(0x15ABDA0)

inline static constexpr unsigned int Struct_2_7CAA93E3FEB7B3D6_TypeDefinitionIndex = 49507;

struct alignas(8) Struct_2_7CAA93E3FEB7B3D6
{
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::Class_3_401EFD0D9B10F234* Field_2_1; // 0x18
	::Class_2_24193089A4D2255F* Field_2_2; // 0x20

	::System::Boolean Equals(::Struct_2_7CAA93E3FEB7B3D6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7CAA93E3FEB7B3D6))((::PBYTE)hIl2Cpp + STRUCT_2_7CAA93E3FEB7B3D6_EQUALS_OFFSET))(this, a1);
	}
};
