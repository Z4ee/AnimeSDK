#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_2D72B3B49C37982D_METHOD_4_3F33C1323F747830_OFFSET UNITYSDK_OFFSET(0x15900CE0)
#define CLASS_4_2D72B3B49C37982D_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x15900A80)
#define CLASS_4_2D72B3B49C37982D_METHOD_4_5E55948716D39060_OFFSET UNITYSDK_OFFSET(0x15900F10)
#define CLASS_4_2D72B3B49C37982D_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159011A0)
#define CLASS_4_2D72B3B49C37982D_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x15900C30)
#define CLASS_4_2D72B3B49C37982D__CTOR_OFFSET UNITYSDK_OFFSET(0x15901020)

inline static constexpr unsigned int Class_4_2D72B3B49C37982D_TypeDefinitionIndex = 89603;

class Class_4_2D72B3B49C37982D : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_8D3E479B491881B3<::Foundation::ViewObject::ViewObjectHandle>* Field_4_6; // 0x18
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D72B3B49C37982D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D72B3B49C37982D_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2D72B3B49C37982D_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_3F33C1323F747830(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_2D72B3B49C37982D_METHOD_4_3F33C1323F747830_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_5E55948716D39060(::Struct_2_29439DBE2B63DCF3& a1, ::System::UInt32 a2, ::Foundation::ViewObject::ViewObjectHandle a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_4_2D72B3B49C37982D_METHOD_4_5E55948716D39060_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2D72B3B49C37982D_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
