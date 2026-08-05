#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_A1A8164128112A92_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1591B380)
#define CLASS_4_A1A8164128112A92_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1591BA80)
#define CLASS_4_A1A8164128112A92_METHOD_4_736362F4F36A44A7_OFFSET UNITYSDK_OFFSET(0x1591B4D0)
#define CLASS_4_A1A8164128112A92__CTOR_OFFSET UNITYSDK_OFFSET(0x1591B930)

inline static constexpr unsigned int Class_4_A1A8164128112A92_TypeDefinitionIndex = 55945;

class Class_4_A1A8164128112A92 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x30
	::Class_3_B537A0AA78803363* Field_4_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A8164128112A92__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A8164128112A92_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_736362F4F36A44A7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A1A8164128112A92_METHOD_4_736362F4F36A44A7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A8164128112A92_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
