#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_09C674B625F78810;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define STRUCT_2_310B46602BEB4586_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x296E0)
#define STRUCT_2_310B46602BEB4586_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x296F0)

inline static constexpr unsigned int Struct_2_310B46602BEB4586_TypeDefinitionIndex = 49781;

struct alignas(8) Struct_2_310B46602BEB4586
{
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::Class_2_09C674B625F78810* _ParamList_k__BackingField; // 0x28

	::Class_2_09C674B625F78810* get_ParamList()
	{
		return ((::Class_2_09C674B625F78810*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_310B46602BEB4586_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Class_2_09C674B625F78810* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_09C674B625F78810*))((::PBYTE)hIl2Cpp + STRUCT_2_310B46602BEB4586_SET_PARAMLIST_OFFSET))(this, value);
	}
};
