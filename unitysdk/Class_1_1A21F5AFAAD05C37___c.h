#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_1_1A21F5AFAAD05C37___C_METHOD_1_84C4315E9454E5D3_OFFSET UNITYSDK_OFFSET(0x19034EE0)
#define CLASS_1_1A21F5AFAAD05C37___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19034E90)
#define CLASS_1_1A21F5AFAAD05C37___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19034ED0)

inline static constexpr unsigned int Class_1_1A21F5AFAAD05C37___c_TypeDefinitionIndex = 62370;

class Class_1_1A21F5AFAAD05C37___c : public ::System::Object
{
public:
	static ::Class_1_1A21F5AFAAD05C37___c** StaticGet___9()
	{
		return (::Class_1_1A21F5AFAAD05C37___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A21F5AFAAD05C37___c_TypeDefinitionIndex)->GetStaticField(0x300F0);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__7_2()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A21F5AFAAD05C37___c_TypeDefinitionIndex)->GetStaticField(0x300F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A21F5AFAAD05C37___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A21F5AFAAD05C37___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84C4315E9454E5D3(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_1_1A21F5AFAAD05C37___C_METHOD_1_84C4315E9454E5D3_OFFSET))(this, a1);
	}
};
