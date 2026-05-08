#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_B8BCF084EF26502B_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11AEEB20)
#define CLASS_3_B8BCF084EF26502B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11AEEE10)
#define CLASS_3_B8BCF084EF26502B_METHOD_3_D24C4294507BECB4_OFFSET UNITYSDK_OFFSET(0x11AEEC00)
#define CLASS_3_B8BCF084EF26502B__CTOR_OFFSET UNITYSDK_OFFSET(0x11AEED20)

inline static constexpr unsigned int Class_3_B8BCF084EF26502B_TypeDefinitionIndex = 42297;

class Class_3_B8BCF084EF26502B : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_1; // 0x18
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8BCF084EF26502B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8BCF084EF26502B_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_D24C4294507BECB4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_B8BCF084EF26502B_METHOD_3_D24C4294507BECB4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B8BCF084EF26502B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
