#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_5F3554F3AFB1219A_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xDEA2480)
#define CLASS_3_5F3554F3AFB1219A_METHOD_3_7DCA9545AA6FF653_OFFSET UNITYSDK_OFFSET(0xDEA2550)
#define CLASS_3_5F3554F3AFB1219A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEA27C0)
#define CLASS_3_5F3554F3AFB1219A__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA26D0)

inline static constexpr unsigned int Class_3_5F3554F3AFB1219A_TypeDefinitionIndex = 44277;

class Class_3_5F3554F3AFB1219A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_7DCA9545AA6FF653(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A_METHOD_3_7DCA9545AA6FF653_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F3554F3AFB1219A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
