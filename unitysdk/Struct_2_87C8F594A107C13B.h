#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FC12FDC7914CFFD8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define STRUCT_2_87C8F594A107C13B_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define STRUCT_2_87C8F594A107C13B_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x38CBD50)

inline static constexpr unsigned int Struct_2_87C8F594A107C13B_TypeDefinitionIndex = 51530;

struct alignas(8) Struct_2_87C8F594A107C13B
{
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
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
