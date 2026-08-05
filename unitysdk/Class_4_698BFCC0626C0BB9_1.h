#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_698BFCC0626C0BB9_1_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1612EBE0)
#define CLASS_4_698BFCC0626C0BB9_1_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1612F200)
#define CLASS_4_698BFCC0626C0BB9_1_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x1612ED90)
#define CLASS_4_698BFCC0626C0BB9_1_METHOD_4_F222BB19481E3EDA_OFFSET UNITYSDK_OFFSET(0x1612EE40)
#define CLASS_4_698BFCC0626C0BB9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1612F080)

inline static constexpr unsigned int Class_4_698BFCC0626C0BB9_1_TypeDefinitionIndex = 71234;

class Class_4_698BFCC0626C0BB9_1 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_3; // 0x18
	::Class_4_8D3E479B491881B3<::MoleMole::EntityHandle>* Field_4_1; // 0x20
	::Class_4_8D3E479B491881B3<::System::String*>* Field_4_2; // 0x28
	::Class_3_B537A0AA78803363* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_698BFCC0626C0BB9_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_698BFCC0626C0BB9_1_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_698BFCC0626C0BB9_1_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_F222BB19481E3EDA(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_698BFCC0626C0BB9_1_METHOD_4_F222BB19481E3EDA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_698BFCC0626C0BB9_1_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
