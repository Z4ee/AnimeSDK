#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_561E50816A4815D5_METHOD_3_71CEF9041F251366_OFFSET UNITYSDK_OFFSET(0x1792C360)
#define CLASS_3_561E50816A4815D5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1792C820)
#define CLASS_3_561E50816A4815D5_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1792C160)
#define CLASS_3_561E50816A4815D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1792C650)

inline static constexpr unsigned int Class_3_561E50816A4815D5_TypeDefinitionIndex = 74687;

class Class_3_561E50816A4815D5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_2; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30
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
