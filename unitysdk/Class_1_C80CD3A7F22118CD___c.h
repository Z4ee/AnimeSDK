#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C80CD3A7F22118CD;

#define CLASS_1_C80CD3A7F22118CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C61D360)
#define CLASS_1_C80CD3A7F22118CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61D3A0)
#define CLASS_1_C80CD3A7F22118CD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1C61D3B0)

inline static constexpr unsigned int Class_1_C80CD3A7F22118CD___c_TypeDefinitionIndex = 31543;

class Class_1_C80CD3A7F22118CD___c : public ::System::Object
{
public:
	static ::Class_1_C80CD3A7F22118CD___c** StaticGet___9()
	{
		return (::Class_1_C80CD3A7F22118CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C80CD3A7F22118CD___c_TypeDefinitionIndex)->GetStaticField(0x2B1E0);
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
