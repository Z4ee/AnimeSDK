#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_2D5C04D0226C550C_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x16084280)
#define CLASS_3_2D5C04D0226C550C_METHOD_3_BFD9C6B0B8BAEFA7_OFFSET UNITYSDK_OFFSET(0x160845F0)
#define CLASS_3_2D5C04D0226C550C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16084DE0)
#define CLASS_3_2D5C04D0226C550C__CTOR_OFFSET UNITYSDK_OFFSET(0x16084AF0)

inline static constexpr unsigned int Class_3_2D5C04D0226C550C_TypeDefinitionIndex = 66633;

class Class_3_2D5C04D0226C550C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_4; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_5; // 0x38
	::Class_3_B537A0AA78803363* Field_3_6; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_3; // 0x50
	::Class_3_CF43FA1E89397A1C* Field_3_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D5C04D0226C550C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D5C04D0226C550C_METHOD_3_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_3_BFD9C6B0B8BAEFA7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_2D5C04D0226C550C_METHOD_3_BFD9C6B0B8BAEFA7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2D5C04D0226C550C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
