#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19B58ACA70806C6B;

#define CLASS_1_19B58ACA70806C6B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC13940)
#define CLASS_1_19B58ACA70806C6B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC13980)
#define CLASS_1_19B58ACA70806C6B___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DC13990)

inline static constexpr unsigned int Class_1_19B58ACA70806C6B___c_TypeDefinitionIndex = 32309;

class Class_1_19B58ACA70806C6B___c : public ::System::Object
{
public:
	static ::Class_1_19B58ACA70806C6B___c** StaticGet___9()
	{
		return (::Class_1_19B58ACA70806C6B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19B58ACA70806C6B___c_TypeDefinitionIndex)->GetStaticField(0x40E10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19B58ACA70806C6B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B58ACA70806C6B___C__CTOR_OFFSET))(this);
	}

	::Class_1_19B58ACA70806C6B* __cctor_b__43_0()
	{
		return ((::Class_1_19B58ACA70806C6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B58ACA70806C6B___C___CCTOR_B__43_0_OFFSET))(this);
	}
};
