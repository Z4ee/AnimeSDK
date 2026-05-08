#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ArrayPropertyType.h"
#include "unitysdk/System/ValueType.h"

#define ARRAYPROPERTYDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18FE1000)

inline static constexpr unsigned int ArrayPropertyData_TypeDefinitionIndex = 29588;

struct alignas(8) ArrayPropertyData
{
	::ArrayPropertyType type; // 0x10
	::System::Int32 arrayPropertyID; // 0x14
	::System::Int32 arrayPropertyIndex; // 0x18
	::System::Int32 arrayIndex; // 0x1C
	::System::Int32 componentIndex; // 0x20
	::Il2CppArray<::System::Int32>* properties; // 0x28

	/*
	static ::ArrayPropertyData op_Implicit(::System::ValueTuple_6<::ArrayPropertyType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*> tuple)
	{
		return ((::ArrayPropertyData(*)(::System::ValueTuple_6<::ArrayPropertyType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*>))((::PBYTE)hIl2Cpp + ARRAYPROPERTYDATA_OP_IMPLICIT_OFFSET))(tuple);
	}
	*/
};
