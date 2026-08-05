#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_A6D10ADBD78E1605_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13E02C90)
#define CLASS_4_A6D10ADBD78E1605_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13E02720)
#define CLASS_4_A6D10ADBD78E1605_METHOD_4_6A0B65D55F409CD0_OFFSET UNITYSDK_OFFSET(0x13E028D0)
#define CLASS_4_A6D10ADBD78E1605__CTOR_OFFSET UNITYSDK_OFFSET(0x13E02AC0)

inline static constexpr unsigned int Class_4_A6D10ADBD78E1605_TypeDefinitionIndex = 65363;

class Class_4_A6D10ADBD78E1605 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_4_7; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x38
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A6D10ADBD78E1605__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A6D10ADBD78E1605_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_6A0B65D55F409CD0(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A6D10ADBD78E1605_METHOD_4_6A0B65D55F409CD0_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A6D10ADBD78E1605_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
