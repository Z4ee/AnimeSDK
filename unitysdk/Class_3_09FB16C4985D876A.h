#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_09FB16C4985D876A_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1463CF70)
#define CLASS_3_09FB16C4985D876A_METHOD_3_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x1463D1D0)
#define CLASS_3_09FB16C4985D876A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1463D7A0)
#define CLASS_3_09FB16C4985D876A__CTOR_OFFSET UNITYSDK_OFFSET(0x1463D520)

inline static constexpr unsigned int Class_3_09FB16C4985D876A_TypeDefinitionIndex = 79657;

class Class_3_09FB16C4985D876A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_2; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_3_3; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09FB16C4985D876A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09FB16C4985D876A_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_24AD3B57ADC65069(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_09FB16C4985D876A_METHOD_3_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09FB16C4985D876A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
