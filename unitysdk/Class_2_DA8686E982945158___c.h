#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_DA8686E982945158___C_METHOD_1_3B493E7C3E67E41C_OFFSET UNITYSDK_OFFSET(0x156400B0)
#define CLASS_2_DA8686E982945158___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15640060)
#define CLASS_2_DA8686E982945158___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156400A0)

inline static constexpr unsigned int Class_2_DA8686E982945158___c_TypeDefinitionIndex = 45681;

class Class_2_DA8686E982945158___c : public ::System::Object
{
public:
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__4_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DA8686E982945158___c_TypeDefinitionIndex)->GetStaticField(0x39080);
	}
	static ::Class_2_DA8686E982945158___c** StaticGet___9()
	{
		return (::Class_2_DA8686E982945158___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DA8686E982945158___c_TypeDefinitionIndex)->GetStaticField(0x39088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DA8686E982945158___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA8686E982945158___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3B493E7C3E67E41C(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_DA8686E982945158___C_METHOD_1_3B493E7C3E67E41C_OFFSET))(this, a1);
	}
};
