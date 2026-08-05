#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_0C5694D595712657_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11B3E010)
#define CLASS_3_0C5694D595712657_METHOD_3_A51C99ADEC940A24_OFFSET UNITYSDK_OFFSET(0x11B3E0E0)
#define CLASS_3_0C5694D595712657_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B3E410)
#define CLASS_3_0C5694D595712657__CTOR_OFFSET UNITYSDK_OFFSET(0x11B3E320)

inline static constexpr unsigned int Class_3_0C5694D595712657_TypeDefinitionIndex = 50701;

class Class_3_0C5694D595712657 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C5694D595712657__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C5694D595712657_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_A51C99ADEC940A24(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_0C5694D595712657_METHOD_3_A51C99ADEC940A24_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C5694D595712657_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
