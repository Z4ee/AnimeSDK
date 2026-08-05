#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_C2BF483F21854F5F_METHOD_3_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0x14D2DA20)
#define CLASS_3_C2BF483F21854F5F_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x14D2D760)
#define CLASS_3_C2BF483F21854F5F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D2E530)
#define CLASS_3_C2BF483F21854F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x14D2E2B0)

inline static constexpr unsigned int Class_3_C2BF483F21854F5F_TypeDefinitionIndex = 90832;

class Class_3_C2BF483F21854F5F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_3; // 0x18
	::Class_3_B537A0AA78803363* Field_3_7; // 0x20
	::Class_3_B537A0AA78803363* Field_3_5; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x38
	::Class_3_B537A0AA78803363* Field_3_6; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2BF483F21854F5F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
