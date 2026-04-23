#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_234EC89DAE861A3E;

#define CLASS_1_234EC89DAE861A3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AF91A0)
#define CLASS_1_234EC89DAE861A3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF91D0)
#define CLASS_1_234EC89DAE861A3E___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x19AF91E0)

inline static constexpr unsigned int Class_1_234EC89DAE861A3E___c_TypeDefinitionIndex = 25116;

class Class_1_234EC89DAE861A3E___c : public ::System::Object
{
public:
	static ::Class_1_234EC89DAE861A3E___c** StaticGet___9()
	{
		return (::Class_1_234EC89DAE861A3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_234EC89DAE861A3E___c_TypeDefinitionIndex)->GetStaticField(0x26F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_234EC89DAE861A3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234EC89DAE861A3E___C__CTOR_OFFSET))(this);
	}

	::Class_1_234EC89DAE861A3E* __cctor_b__83_0()
	{
		return ((::Class_1_234EC89DAE861A3E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_234EC89DAE861A3E___C___CCTOR_B__83_0_OFFSET))(this);
	}
};
