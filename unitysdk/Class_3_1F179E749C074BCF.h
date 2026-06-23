#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_1F179E749C074BCF_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1056C2D0)
#define CLASS_3_1F179E749C074BCF_METHOD_3_29CA7C76C5D57032_OFFSET UNITYSDK_OFFSET(0x1056C410)
#define CLASS_3_1F179E749C074BCF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1056CA40)
#define CLASS_3_1F179E749C074BCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1056C940)

inline static constexpr unsigned int Class_3_1F179E749C074BCF_TypeDefinitionIndex = 63564;

class Class_3_1F179E749C074BCF : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F179E749C074BCF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F179E749C074BCF_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_29CA7C76C5D57032(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_1F179E749C074BCF_METHOD_3_29CA7C76C5D57032_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F179E749C074BCF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
