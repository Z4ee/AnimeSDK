#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_86B2130F47142702_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x1555FEA0)
#define CLASS_3_86B2130F47142702_METHOD_3_6420BCE09A2E1435_OFFSET UNITYSDK_OFFSET(0x155601C0)
#define CLASS_3_86B2130F47142702_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15560BB0)
#define CLASS_3_86B2130F47142702__CTOR_OFFSET UNITYSDK_OFFSET(0x155608F0)

inline static constexpr unsigned int Class_3_86B2130F47142702_TypeDefinitionIndex = 65078;

class Class_3_86B2130F47142702 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_11; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_0; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_1; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_5; // 0x40
	::Class_3_B537A0AA78803363* Field_3_10; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86B2130F47142702__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86B2130F47142702_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_6420BCE09A2E1435(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_86B2130F47142702_METHOD_3_6420BCE09A2E1435_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86B2130F47142702_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
