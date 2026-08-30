#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

#define CLASS_1_FBB2881178F8452B_CLASS_1_8DC1405A64BF7BB7_COMPARE_OFFSET UNITYSDK_OFFSET(0x18D11E80)
#define CLASS_1_FBB2881178F8452B_CLASS_1_8DC1405A64BF7BB7__CTOR_OFFSET UNITYSDK_OFFSET(0x18D11700)

inline static constexpr unsigned int Class_1_FBB2881178F8452B_Class_1_8DC1405A64BF7BB7_TypeDefinitionIndex = 74014;

class Class_1_FBB2881178F8452B_Class_1_8DC1405A64BF7BB7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_CLASS_1_8DC1405A64BF7BB7__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> a1, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_FBB2881178F8452B_CLASS_1_8DC1405A64BF7BB7_COMPARE_OFFSET))(this, a1, a2);
	}
};
