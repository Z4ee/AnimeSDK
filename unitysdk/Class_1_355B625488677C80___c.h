#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355B625488677C80;

#define CLASS_1_355B625488677C80___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC98840)
#define CLASS_1_355B625488677C80___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC98880)
#define CLASS_1_355B625488677C80___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1CC98890)

inline static constexpr unsigned int Class_1_355B625488677C80___c_TypeDefinitionIndex = 26906;

class Class_1_355B625488677C80___c : public ::System::Object
{
public:
	static ::Class_1_355B625488677C80___c** StaticGet___9()
	{
		return (::Class_1_355B625488677C80___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355B625488677C80___c_TypeDefinitionIndex)->GetStaticField(0x5E600);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355B625488677C80___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355B625488677C80___C__CTOR_OFFSET))(this);
	}

	::Class_1_355B625488677C80* __cctor_b__58_0()
	{
		return ((::Class_1_355B625488677C80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355B625488677C80___C___CCTOR_B__58_0_OFFSET))(this);
	}
};
