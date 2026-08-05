#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_98CFFACC971CD0A0_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1C3C97D0)
#define CLASS_3_98CFFACC971CD0A0_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x1C3C9980)
#define CLASS_3_98CFFACC971CD0A0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3C9D40)
#define CLASS_3_98CFFACC971CD0A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C9C00)

inline static constexpr unsigned int Class_3_98CFFACC971CD0A0_TypeDefinitionIndex = 55159;

class Class_3_98CFFACC971CD0A0 : public ::Class_2_52F82E04F7FEE529
{
public:
	// static const ::System::String* Field_3_5; // 0x0
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x28
	::Class_3_B537A0AA78803363* Field_3_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
