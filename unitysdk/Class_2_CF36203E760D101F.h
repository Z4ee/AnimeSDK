#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

class Class_3_F29FF2F0F1D4B205;

#define CLASS_2_CF36203E760D101F_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x1554F0C0)
#define CLASS_2_CF36203E760D101F_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x1554F1D0)
#define CLASS_2_CF36203E760D101F__CTOR_OFFSET UNITYSDK_OFFSET(0x1554F160)

inline static constexpr unsigned int Class_2_CF36203E760D101F_TypeDefinitionIndex = 43179;

class Class_2_CF36203E760D101F : public ::Class_1_8377BAB19A574A40
{
public:
	::Class_3_F29FF2F0F1D4B205* Field_2_0; // 0x80
	::System::Boolean Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF36203E760D101F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF36203E760D101F_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF36203E760D101F_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
