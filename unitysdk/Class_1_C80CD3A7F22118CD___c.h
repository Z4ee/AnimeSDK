#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C80CD3A7F22118CD;

#define CLASS_1_C80CD3A7F22118CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11C500)
#define CLASS_1_C80CD3A7F22118CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11C540)
#define CLASS_1_C80CD3A7F22118CD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E11C550)

inline static constexpr unsigned int Class_1_C80CD3A7F22118CD___c_TypeDefinitionIndex = 32284;

class Class_1_C80CD3A7F22118CD___c : public ::System::Object
{
public:
	static ::Class_1_C80CD3A7F22118CD___c** StaticGet___9()
	{
		return (::Class_1_C80CD3A7F22118CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C80CD3A7F22118CD___c_TypeDefinitionIndex)->GetStaticField(0x42760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD___C__CTOR_OFFSET))(this);
	}

	::Class_1_C80CD3A7F22118CD* __cctor_b__28_0()
	{
		return ((::Class_1_C80CD3A7F22118CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C80CD3A7F22118CD___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
