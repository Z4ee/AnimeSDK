#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_EF8A01A974D43AD3_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x156E2CA0)
#define CLASS_3_EF8A01A974D43AD3_METHOD_3_25B9FA7D8C5654B1_OFFSET UNITYSDK_OFFSET(0x156E2DE0)
#define CLASS_3_EF8A01A974D43AD3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156E2FE0)
#define CLASS_3_EF8A01A974D43AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x156E2EE0)

inline static constexpr unsigned int Class_3_EF8A01A974D43AD3_TypeDefinitionIndex = 46989;

class Class_3_EF8A01A974D43AD3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8A01A974D43AD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8A01A974D43AD3_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_25B9FA7D8C5654B1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_EF8A01A974D43AD3_METHOD_3_25B9FA7D8C5654B1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF8A01A974D43AD3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
