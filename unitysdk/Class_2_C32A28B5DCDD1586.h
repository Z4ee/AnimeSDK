#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_201.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_201.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C32A28B5DCDD1586_METHOD_2_75B8D4145A2624F9_OFFSET UNITYSDK_OFFSET(0x1607FCD0)
#define CLASS_2_C32A28B5DCDD1586_METHOD_2_C36D4199F741E0C8_OFFSET UNITYSDK_OFFSET(0x1607FE60)
#define CLASS_2_C32A28B5DCDD1586__CTOR_OFFSET UNITYSDK_OFFSET(0x1607FB50)

inline static constexpr unsigned int Class_2_C32A28B5DCDD1586_TypeDefinitionIndex = 16710;

class Class_2_C32A28B5DCDD1586 : public ::Class_1_48F4A404A08692BE_201
{
public:
	::Il2CppArray<::System::Int32>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_201 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_201, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_C32A28B5DCDD1586__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_75B8D4145A2624F9(::System::Int32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C32A28B5DCDD1586_METHOD_2_75B8D4145A2624F9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C36D4199F741E0C8(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_C32A28B5DCDD1586_METHOD_2_C36D4199F741E0C8_OFFSET))(this, a1, a2);
	}
};
