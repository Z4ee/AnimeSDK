#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_473652820861CDE0_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1B31F250)
#define CLASS_3_473652820861CDE0_METHOD_3_736362F4F36A44A7_OFFSET UNITYSDK_OFFSET(0x1B31F390)
#define CLASS_3_473652820861CDE0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B31F8F0)
#define CLASS_3_473652820861CDE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31F7D0)

inline static constexpr unsigned int Class_3_473652820861CDE0_TypeDefinitionIndex = 46145;

class Class_3_473652820861CDE0 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x20
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_473652820861CDE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_473652820861CDE0_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_736362F4F36A44A7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_473652820861CDE0_METHOD_3_736362F4F36A44A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_473652820861CDE0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
