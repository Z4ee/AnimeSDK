#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define CLASS_2_CB55141033CDDD7A___C_METHOD_1_67A6C41ED100A1D7_OFFSET UNITYSDK_OFFSET(0x10F18620)
#define CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F185D0)
#define CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F18610)

inline static constexpr unsigned int Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex = 69882;

class Class_2_CB55141033CDDD7A___c : public ::System::Object
{
public:
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__7_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x32EB0);
	}
	static ::Class_2_CB55141033CDDD7A___c** StaticGet___9()
	{
		return (::Class_2_CB55141033CDDD7A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CB55141033CDDD7A___c_TypeDefinitionIndex)->GetStaticField(0x32EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67A6C41ED100A1D7(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_CB55141033CDDD7A___C_METHOD_1_67A6C41ED100A1D7_OFFSET))(this, a1);
	}
};
