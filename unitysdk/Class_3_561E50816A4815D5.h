#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_561E50816A4815D5_METHOD_3_71CEF9041F251366_OFFSET UNITYSDK_OFFSET(0xDE928B0)
#define CLASS_3_561E50816A4815D5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE92DA0)
#define CLASS_3_561E50816A4815D5_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xDE926B0)
#define CLASS_3_561E50816A4815D5__CTOR_OFFSET UNITYSDK_OFFSET(0xDE92BD0)

inline static constexpr unsigned int Class_3_561E50816A4815D5_TypeDefinitionIndex = 76463;

class Class_3_561E50816A4815D5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E50816A4815D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E50816A4815D5_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_71CEF9041F251366(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_561E50816A4815D5_METHOD_3_71CEF9041F251366_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E50816A4815D5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
