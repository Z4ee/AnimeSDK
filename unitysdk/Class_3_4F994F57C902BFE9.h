#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_4F994F57C902BFE9_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xE05EA60)
#define CLASS_3_4F994F57C902BFE9_METHOD_3_5F8151D2E52563F8_OFFSET UNITYSDK_OFFSET(0xE05EBA0)
#define CLASS_3_4F994F57C902BFE9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE05F010)
#define CLASS_3_4F994F57C902BFE9__CTOR_OFFSET UNITYSDK_OFFSET(0xE05EF10)

inline static constexpr unsigned int Class_3_4F994F57C902BFE9_TypeDefinitionIndex = 75883;

class Class_3_4F994F57C902BFE9 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F994F57C902BFE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F994F57C902BFE9_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_5F8151D2E52563F8(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_4F994F57C902BFE9_METHOD_3_5F8151D2E52563F8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F994F57C902BFE9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
