#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_C86513467ECBE414_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1391DAE0)
#define CLASS_4_C86513467ECBE414_METHOD_4_4826B79ADC145D8B_OFFSET UNITYSDK_OFFSET(0x1391DD90)
#define CLASS_4_C86513467ECBE414_METHOD_4_9602492772BD152B_OFFSET UNITYSDK_OFFSET(0x1391E100)
#define CLASS_4_C86513467ECBE414_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1391E070)
#define CLASS_4_C86513467ECBE414_METHOD_4_EB5BAD6F7BB892F4_OFFSET UNITYSDK_OFFSET(0x1391DC90)
#define CLASS_4_C86513467ECBE414__CTOR_OFFSET UNITYSDK_OFFSET(0x1391DEF0)

inline static constexpr unsigned int Class_4_C86513467ECBE414_TypeDefinitionIndex = 66150;

class Class_4_C86513467ECBE414 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_1; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_4_3; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x28
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C86513467ECBE414__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C86513467ECBE414_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_EB5BAD6F7BB892F4(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_C86513467ECBE414_METHOD_4_EB5BAD6F7BB892F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_4826B79ADC145D8B(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_C86513467ECBE414_METHOD_4_4826B79ADC145D8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C86513467ECBE414_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_4_9602492772BD152B(::Struct_2_29439DBE2B63DCF3 a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_C86513467ECBE414_METHOD_4_9602492772BD152B_OFFSET))(this, a1, a2);
	}
};
