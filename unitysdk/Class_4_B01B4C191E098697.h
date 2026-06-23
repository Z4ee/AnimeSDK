#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_B01B4C191E098697_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF5ECFB0)
#define CLASS_4_B01B4C191E098697_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xF5ECC50)
#define CLASS_4_B01B4C191E098697_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xF5ECE00)
#define CLASS_4_B01B4C191E098697__CTOR_OFFSET UNITYSDK_OFFSET(0xF5ECE50)

inline static constexpr unsigned int Class_4_B01B4C191E098697_TypeDefinitionIndex = 45951;

class Class_4_B01B4C191E098697 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_3; // 0x28
	::Class_4_F91115D9A1F02F5F<::UnityEngine::Vector3>* Field_4_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B01B4C191E098697__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B01B4C191E098697_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_B01B4C191E098697_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B01B4C191E098697_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
