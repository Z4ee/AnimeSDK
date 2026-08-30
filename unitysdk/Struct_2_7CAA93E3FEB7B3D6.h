#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_291F7DA21A504FC4;
class Class_3_0F021ECA96048DC9;
namespace RPG::GameCore { class TaskContext; }

#define STRUCT_2_7CAA93E3FEB7B3D6_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B38F80)

inline static constexpr unsigned int Struct_2_7CAA93E3FEB7B3D6_TypeDefinitionIndex = 53940;

struct alignas(8) Struct_2_7CAA93E3FEB7B3D6
{
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
	::Class_3_0F021ECA96048DC9* FJCAKOIDONG; // 0x18
	::Class_2_291F7DA21A504FC4* ILIIOLJMKME; // 0x20

	::System::Boolean Equals(::Struct_2_7CAA93E3FEB7B3D6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7CAA93E3FEB7B3D6))((::PBYTE)hIl2Cpp + STRUCT_2_7CAA93E3FEB7B3D6_EQUALS_OFFSET))(this, a1);
	}
};
