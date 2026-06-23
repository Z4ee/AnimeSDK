#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_5D40E55CD308B7F3_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12E824C0)
#define CLASS_3_5D40E55CD308B7F3_METHOD_3_A8DBE61CE457F4F0_OFFSET UNITYSDK_OFFSET(0x12E82670)
#define CLASS_3_5D40E55CD308B7F3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12E82AF0)
#define CLASS_3_5D40E55CD308B7F3__CTOR_OFFSET UNITYSDK_OFFSET(0x12E82960)

inline static constexpr unsigned int Class_3_5D40E55CD308B7F3_TypeDefinitionIndex = 63841;

class Class_3_5D40E55CD308B7F3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_1; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_A8DBE61CE457F4F0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3_METHOD_3_A8DBE61CE457F4F0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D40E55CD308B7F3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
