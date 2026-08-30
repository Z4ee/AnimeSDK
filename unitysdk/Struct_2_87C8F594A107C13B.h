#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FC12FDC7914CFFD8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define STRUCT_2_87C8F594A107C13B_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x82D660)
#define STRUCT_2_87C8F594A107C13B_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x379FAF0)

inline static constexpr unsigned int Struct_2_87C8F594A107C13B_TypeDefinitionIndex = 54214;

struct alignas(8) Struct_2_87C8F594A107C13B
{
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x10
	::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x18
	::System::String* KDHPKOFLNFM; // 0x20
	::Class_2_FC12FDC7914CFFD8* _ParamList_k__BackingField; // 0x28

	::Class_2_FC12FDC7914CFFD8* get_ParamList()
	{
		return ((::Class_2_FC12FDC7914CFFD8*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_87C8F594A107C13B_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Class_2_FC12FDC7914CFFD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FC12FDC7914CFFD8*))((::PBYTE)hIl2Cpp + STRUCT_2_87C8F594A107C13B_SET_PARAMLIST_OFFSET))(this, a1);
	}
};
