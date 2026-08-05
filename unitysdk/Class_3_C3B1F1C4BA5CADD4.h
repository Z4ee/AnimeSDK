#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_C3B1F1C4BA5CADD4_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10D14E10)
#define CLASS_3_C3B1F1C4BA5CADD4_METHOD_3_ABB73A4F1AF88194_OFFSET UNITYSDK_OFFSET(0x10D14F50)
#define CLASS_3_C3B1F1C4BA5CADD4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D151B0)
#define CLASS_3_C3B1F1C4BA5CADD4__CTOR_OFFSET UNITYSDK_OFFSET(0x10D15090)

inline static constexpr unsigned int Class_3_C3B1F1C4BA5CADD4_TypeDefinitionIndex = 75411;

class Class_3_C3B1F1C4BA5CADD4 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x18
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_0; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3B1F1C4BA5CADD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3B1F1C4BA5CADD4_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_ABB73A4F1AF88194(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C3B1F1C4BA5CADD4_METHOD_3_ABB73A4F1AF88194_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3B1F1C4BA5CADD4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
