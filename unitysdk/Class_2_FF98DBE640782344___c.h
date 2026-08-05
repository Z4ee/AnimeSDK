#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_FF98DBE640782344___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x12D4D630)
#define CLASS_2_FF98DBE640782344___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D4D5E0)
#define CLASS_2_FF98DBE640782344___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4D620)

inline static constexpr unsigned int Class_2_FF98DBE640782344___c_TypeDefinitionIndex = 82434;

class Class_2_FF98DBE640782344___c : public ::System::Object
{
public:
	static ::Class_2_FF98DBE640782344___c** StaticGet___9()
	{
		return (::Class_2_FF98DBE640782344___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FF98DBE640782344___c_TypeDefinitionIndex)->GetStaticField(0x43400);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__9_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FF98DBE640782344___c_TypeDefinitionIndex)->GetStaticField(0x43408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_FF98DBE640782344___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
