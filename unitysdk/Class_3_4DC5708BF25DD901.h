#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_4DC5708BF25DD901_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12344960)
#define CLASS_3_4DC5708BF25DD901_METHOD_3_C1A7054C258CBAF1_OFFSET UNITYSDK_OFFSET(0x12344A40)
#define CLASS_3_4DC5708BF25DD901_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12344FB0)
#define CLASS_3_4DC5708BF25DD901__CTOR_OFFSET UNITYSDK_OFFSET(0x12344EC0)

inline static constexpr unsigned int Class_3_4DC5708BF25DD901_TypeDefinitionIndex = 69218;

class Class_3_4DC5708BF25DD901 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DC5708BF25DD901__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DC5708BF25DD901_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_C1A7054C258CBAF1(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_4DC5708BF25DD901_METHOD_3_C1A7054C258CBAF1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DC5708BF25DD901_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
