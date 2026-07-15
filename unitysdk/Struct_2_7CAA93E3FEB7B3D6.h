#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_291F7DA21A504FC4;
class Class_3_0F021ECA96048DC9;
namespace RPG::GameCore { class TaskContext; }

#define STRUCT_2_7CAA93E3FEB7B3D6_EQUALS_OFFSET UNITYSDK_OFFSET(0x39CFB50)

inline static constexpr unsigned int Struct_2_7CAA93E3FEB7B3D6_TypeDefinitionIndex = 51256;

struct alignas(8) Struct_2_7CAA93E3FEB7B3D6
{
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::Class_3_0F021ECA96048DC9* Field_2_1; // 0x18
	::Class_2_291F7DA21A504FC4* Field_2_2; // 0x20

	::System::Boolean Equals(::Struct_2_7CAA93E3FEB7B3D6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7CAA93E3FEB7B3D6))((::PBYTE)hIl2Cpp + STRUCT_2_7CAA93E3FEB7B3D6_EQUALS_OFFSET))(this, a1);
	}
};
