#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_F371A089E2CCAF5E_METHOD_3_0C53D5E3AF8561C4_OFFSET UNITYSDK_OFFSET(0xD447490)
#define CLASS_3_F371A089E2CCAF5E_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xD447230)
#define CLASS_3_F371A089E2CCAF5E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD447F30)
#define CLASS_3_F371A089E2CCAF5E__CTOR_OFFSET UNITYSDK_OFFSET(0xD447CF0)

inline static constexpr unsigned int Class_3_F371A089E2CCAF5E_TypeDefinitionIndex = 67027;

class Class_3_F371A089E2CCAF5E : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_3_B537A0AA78803363* Field_3_5; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_2; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_0C53D5E3AF8561C4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E_METHOD_3_0C53D5E3AF8561C4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F371A089E2CCAF5E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
