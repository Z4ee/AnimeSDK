#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_1_E398E2F4402CE967;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_97;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_06B7C20984D8BDA8_METHOD_2_CA2103B39551E380_OFFSET UNITYSDK_OFFSET(0x1818E030)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_CF62297C914431A3_OFFSET UNITYSDK_OFFSET(0x1818DB80)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_D11B3ADF0600812A_OFFSET UNITYSDK_OFFSET(0x1818E4D0)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0x1818D9B0)
#define CLASS_2_06B7C20984D8BDA8_METHOD_2_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x1818E5D0)
#define CLASS_2_06B7C20984D8BDA8_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1818D6F0)
#define CLASS_2_06B7C20984D8BDA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1818D950)

inline static constexpr unsigned int Class_2_06B7C20984D8BDA8_TypeDefinitionIndex = 81969;

class Class_2_06B7C20984D8BDA8 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_0; // 0x70
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_1; // 0x78
	::Class_0_16E4307DCC419505_97<::System::Int32>* Field_2_2; // 0x80
	::Class_1_E398E2F4402CE967* Field_2_4; // 0x88
	::Class_0_16E4307DCC419505_97<::System::Int32>* Field_2_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Int32 Method_2_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::System::Void Method_2_CF62297C914431A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_CF62297C914431A3_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_D11B3ADF0600812A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_D11B3ADF0600812A_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_CA2103B39551E380()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_CA2103B39551E380_OFFSET))(this);
	}

	::System::Boolean Method_2_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B7C20984D8BDA8_METHOD_2_F1BB718E73080948_OFFSET))(this);
	}
};
