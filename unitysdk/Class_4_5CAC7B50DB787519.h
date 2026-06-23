#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_5CAC7B50DB787519_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1902B630)
#define CLASS_4_5CAC7B50DB787519_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1902BDD0)
#define CLASS_4_5CAC7B50DB787519_METHOD_4_D3748E13451185D3_OFFSET UNITYSDK_OFFSET(0x1902B780)
#define CLASS_4_5CAC7B50DB787519__CTOR_OFFSET UNITYSDK_OFFSET(0x1902BCA0)

inline static constexpr unsigned int Class_4_5CAC7B50DB787519_TypeDefinitionIndex = 87412;

class Class_4_5CAC7B50DB787519 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5CAC7B50DB787519__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5CAC7B50DB787519_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_D3748E13451185D3(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_5CAC7B50DB787519_METHOD_4_D3748E13451185D3_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5CAC7B50DB787519_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
