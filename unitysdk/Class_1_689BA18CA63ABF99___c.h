#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_689BA18CA63ABF99;

#define CLASS_1_689BA18CA63ABF99___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E301BE0)
#define CLASS_1_689BA18CA63ABF99___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E301C10)
#define CLASS_1_689BA18CA63ABF99___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E301C20)

inline static constexpr unsigned int Class_1_689BA18CA63ABF99___c_TypeDefinitionIndex = 32505;

class Class_1_689BA18CA63ABF99___c : public ::System::Object
{
public:
	static ::Class_1_689BA18CA63ABF99___c** StaticGet___9()
	{
		return (::Class_1_689BA18CA63ABF99___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_689BA18CA63ABF99___c_TypeDefinitionIndex)->GetStaticField(0x20240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_689BA18CA63ABF99___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_689BA18CA63ABF99___C__CTOR_OFFSET))(this);
	}

	::Class_1_689BA18CA63ABF99* __cctor_b__43_0()
	{
		return ((::Class_1_689BA18CA63ABF99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_689BA18CA63ABF99___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
