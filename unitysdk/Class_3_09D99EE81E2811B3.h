#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_09D99EE81E2811B3_METHOD_3_0322931173E310B1_OFFSET UNITYSDK_OFFSET(0x14DC5A10)
#define CLASS_3_09D99EE81E2811B3_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14DC5940)
#define CLASS_3_09D99EE81E2811B3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14DC5C50)
#define CLASS_3_09D99EE81E2811B3__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC5B60)

inline static constexpr unsigned int Class_3_09D99EE81E2811B3_TypeDefinitionIndex = 80100;

class Class_3_09D99EE81E2811B3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_0; // 0x18
	::Class_4_B51FB35349ACD175<::System::String*>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09D99EE81E2811B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09D99EE81E2811B3_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_0322931173E310B1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_09D99EE81E2811B3_METHOD_3_0322931173E310B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09D99EE81E2811B3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
