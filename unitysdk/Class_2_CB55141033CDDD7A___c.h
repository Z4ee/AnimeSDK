#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define CLASS_2_CB55141033CDDD7A___C_METHOD_1_69F064957AB6C3FB_OFFSET UNITYSDK_OFFSET(0x12866940)
#define CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128668F0)
#define CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12866930)

inline static constexpr unsigned int Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex = 66158;

class Class_2_CB55141033CDDD7A___c : public ::System::Object
{
public:
	static ::Class_2_CB55141033CDDD7A___c** StaticGet___9()
	{
		return (::Class_2_CB55141033CDDD7A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x31D50);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__7_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x31D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_69F064957AB6C3FB(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C_METHOD_1_69F064957AB6C3FB_OFFSET))(this, a1);
	}
};
