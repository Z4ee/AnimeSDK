#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4127EA2E8A175737.h"

class Class_0_16E4307DCC419505_815;
class Class_0_16E4307DCC419505_823;
class Class_4_B21A50BB32C03FF0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6B3BE204A6CD9A1D_METHOD_3_74536FB86B1DF8C2_OFFSET UNITYSDK_OFFSET(0x915A600)
#define CLASS_3_6B3BE204A6CD9A1D_METHOD_3_8A0B81604C179BF7_OFFSET UNITYSDK_OFFSET(0x915A4D0)
#define CLASS_3_6B3BE204A6CD9A1D_METHOD_3_8A841A42F088F460_OFFSET UNITYSDK_OFFSET(0x915A640)
#define CLASS_3_6B3BE204A6CD9A1D__CTOR_OFFSET UNITYSDK_OFFSET(0x915A490)

inline static constexpr unsigned int Class_3_6B3BE204A6CD9A1D_TypeDefinitionIndex = 61945;

class Class_3_6B3BE204A6CD9A1D : public ::Class_2_4127EA2E8A175737
{
public:
	::Class_0_16E4307DCC419505_815* Field_3_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* Field_3_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_815* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_815*))((::PBYTE)hIl2Cpp + CLASS_3_6B3BE204A6CD9A1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_8A0B81604C179BF7(::Class_4_B21A50BB32C03FF0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B21A50BB32C03FF0*))((::PBYTE)hIl2Cpp + CLASS_3_6B3BE204A6CD9A1D_METHOD_3_8A0B81604C179BF7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* Method_3_74536FB86B1DF8C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B3BE204A6CD9A1D_METHOD_3_74536FB86B1DF8C2_OFFSET))(this);
	}

	::System::Void Method_3_8A841A42F088F460(::Class_4_B21A50BB32C03FF0* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B21A50BB32C03FF0*))((::PBYTE)hIl2Cpp + CLASS_3_6B3BE204A6CD9A1D_METHOD_3_8A841A42F088F460_OFFSET))(this, P0);
	}
};
