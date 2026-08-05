#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_2566037E85BA184B_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x18CC72C0)
#define CLASS_4_2566037E85BA184B_METHOD_4_9EE65C2297700C7D_OFFSET UNITYSDK_OFFSET(0x18CC7BB0)
#define CLASS_4_2566037E85BA184B_METHOD_4_A15A24D8EEA15986_OFFSET UNITYSDK_OFFSET(0x18CC7620)
#define CLASS_4_2566037E85BA184B_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18CC7D90)
#define CLASS_4_2566037E85BA184B_METHOD_4_EB5BAD6F7BB892F4_OFFSET UNITYSDK_OFFSET(0x18CC7520)
#define CLASS_4_2566037E85BA184B__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC79B0)

inline static constexpr unsigned int Class_4_2566037E85BA184B_TypeDefinitionIndex = 90092;

class Class_4_2566037E85BA184B : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_3_B537A0AA78803363* Field_4_4; // 0x18
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_7; // 0x20
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Single>*>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_0; // 0x38
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Boolean>*>* Field_4_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_EB5BAD6F7BB892F4(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_EB5BAD6F7BB892F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_A15A24D8EEA15986(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_A15A24D8EEA15986_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_9EE65C2297700C7D(::Struct_2_29439DBE2B63DCF3 a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_9EE65C2297700C7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2566037E85BA184B_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
