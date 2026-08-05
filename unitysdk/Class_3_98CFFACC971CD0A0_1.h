#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_98CFFACC971CD0A0_1_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x169EC530)
#define CLASS_3_98CFFACC971CD0A0_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169EC950)
#define CLASS_3_98CFFACC971CD0A0_1_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x169EC330)
#define CLASS_3_98CFFACC971CD0A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x169EC780)

inline static constexpr unsigned int Class_3_98CFFACC971CD0A0_1_TypeDefinitionIndex = 77468;

class Class_3_98CFFACC971CD0A0_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x28
	::Class_3_B537A0AA78803363* Field_3_6; // 0x30
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_1_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_1_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98CFFACC971CD0A0_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
