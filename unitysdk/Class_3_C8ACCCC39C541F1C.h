#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_5B5E82918BC44D6E;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_C8ACCCC39C541F1C_METHOD_3_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x171C5240)
#define CLASS_3_C8ACCCC39C541F1C_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x171C5170)
#define CLASS_3_C8ACCCC39C541F1C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x171C54D0)
#define CLASS_3_C8ACCCC39C541F1C__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5420)

inline static constexpr unsigned int Class_3_C8ACCCC39C541F1C_TypeDefinitionIndex = 56927;

class Class_3_C8ACCCC39C541F1C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x18
	::Class_4_5B5E82918BC44D6E* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_24AD3B57ADC65069(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C_METHOD_3_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8ACCCC39C541F1C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
