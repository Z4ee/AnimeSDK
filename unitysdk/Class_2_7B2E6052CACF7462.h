#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_EBCA2A4357C4C8BF_84;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7B2E6052CACF7462_METHOD_2_58C4298B1913476A_OFFSET UNITYSDK_OFFSET(0x153A4810)
#define CLASS_2_7B2E6052CACF7462_METHOD_2_7D172275774B1915_OFFSET UNITYSDK_OFFSET(0x153A4560)
#define CLASS_2_7B2E6052CACF7462_METHOD_2_AB33F45627CD4851_OFFSET UNITYSDK_OFFSET(0x153A5290)
#define CLASS_2_7B2E6052CACF7462_METHOD_2_F741817FEC212E8A_OFFSET UNITYSDK_OFFSET(0x153A4650)
#define CLASS_2_7B2E6052CACF7462__CTOR_OFFSET UNITYSDK_OFFSET(0x153A4470)

inline static constexpr unsigned int Class_2_7B2E6052CACF7462_TypeDefinitionIndex = 72988;

class Class_2_7B2E6052CACF7462 : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_2_1; // 0x30
	::Il2CppArray<::System::String*>* Field_2_5; // 0x38
	::Il2CppArray<::System::Char>* Field_2_6; // 0x40
	::System::Int32 Field_2_2; // 0x48
	::System::Int32 Field_2_3; // 0x4C
	::System::Int32 Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B2E6052CACF7462__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7D172275774B1915(::Class_1_EBCA2A4357C4C8BF_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBCA2A4357C4C8BF_84*))((::PBYTE)hIl2Cpp + CLASS_2_7B2E6052CACF7462_METHOD_2_7D172275774B1915_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AB33F45627CD4851(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7B2E6052CACF7462_METHOD_2_AB33F45627CD4851_OFFSET))(this, a1);
	}

	::System::Void Method_2_58C4298B1913476A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7B2E6052CACF7462_METHOD_2_58C4298B1913476A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F741817FEC212E8A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7B2E6052CACF7462_METHOD_2_F741817FEC212E8A_OFFSET))(this, a1);
	}
};
