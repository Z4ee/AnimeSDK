#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36CDCA6857E296D1;
class Class_1_56E1726699E41732;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;

#define CLASS_1_53C19F242F94F5E7_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBEB60D0)
#define CLASS_1_53C19F242F94F5E7_METHOD_1_C36D2DF639989D23_OFFSET UNITYSDK_OFFSET(0xBEB7BE0)
#define CLASS_1_53C19F242F94F5E7__CTOR_OFFSET UNITYSDK_OFFSET(0xBEB60C0)

inline static constexpr unsigned int Class_1_53C19F242F94F5E7_TypeDefinitionIndex = 63420;

class Class_1_53C19F242F94F5E7 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_2; // 0x0
	::Class_3_543326C044264182* Field_1_1; // 0x10
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x18

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_53C19F242F94F5E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53C19F242F94F5E7_EXECUTE_OFFSET))(this);
	}

	::System::Boolean Method_1_C36D2DF639989D23(::Class_1_36CDCA6857E296D1* a1, ::Class_1_56E1726699E41732* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36CDCA6857E296D1*, ::Class_1_56E1726699E41732*))((::PBYTE)hIl2Cpp + CLASS_1_53C19F242F94F5E7_METHOD_1_C36D2DF639989D23_OFFSET))(this, a1, a2);
	}
};
