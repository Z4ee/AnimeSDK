#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_BE08C3228814215F_METHOD_3_6A0B65D55F409CD0_OFFSET UNITYSDK_OFFSET(0x1489B4A0)
#define CLASS_3_BE08C3228814215F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1489B860)
#define CLASS_3_BE08C3228814215F_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1489B2A0)
#define CLASS_3_BE08C3228814215F__CTOR_OFFSET UNITYSDK_OFFSET(0x1489B6E0)

inline static constexpr unsigned int Class_3_BE08C3228814215F_TypeDefinitionIndex = 52491;

class Class_3_BE08C3228814215F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_7; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE08C3228814215F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE08C3228814215F_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_6A0B65D55F409CD0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_BE08C3228814215F_METHOD_3_6A0B65D55F409CD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE08C3228814215F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
