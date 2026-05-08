#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_4.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_6.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C32A28B5DCDD1586_METHOD_2_75B8D4145A2624F9_OFFSET UNITYSDK_OFFSET(0x11F86630)
#define CLASS_2_C32A28B5DCDD1586_METHOD_2_C36D4199F741E0C8_OFFSET UNITYSDK_OFFSET(0x11F867C0)
#define CLASS_2_C32A28B5DCDD1586__CTOR_OFFSET UNITYSDK_OFFSET(0x11F864B0)

inline static constexpr unsigned int Class_2_C32A28B5DCDD1586_TypeDefinitionIndex = 16406;

class Class_2_C32A28B5DCDD1586 : public ::Class_1_48F4A404A08692BE_4
{
public:
	::Il2CppArray<::System::Int32>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_6 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_6, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_C32A28B5DCDD1586__CTOR_OFFSET))(this, a1, a2);
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
