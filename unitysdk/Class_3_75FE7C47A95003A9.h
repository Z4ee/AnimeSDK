#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_75FE7C47A95003A9_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11C837C0)
#define CLASS_3_75FE7C47A95003A9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C83C10)
#define CLASS_3_75FE7C47A95003A9_METHOD_3_E267A7D42736C648_OFFSET UNITYSDK_OFFSET(0x11C83890)
#define CLASS_3_75FE7C47A95003A9__CTOR_OFFSET UNITYSDK_OFFSET(0x11C83B20)

inline static constexpr unsigned int Class_3_75FE7C47A95003A9_TypeDefinitionIndex = 56615;

class Class_3_75FE7C47A95003A9 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75FE7C47A95003A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75FE7C47A95003A9_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_E267A7D42736C648(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_75FE7C47A95003A9_METHOD_3_E267A7D42736C648_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75FE7C47A95003A9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
