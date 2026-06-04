#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D811CE24096BDBCA;

#define CLASS_1_D811CE24096BDBCA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A54FBC0)
#define CLASS_1_D811CE24096BDBCA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54FC00)
#define CLASS_1_D811CE24096BDBCA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A54FC10)

inline static constexpr unsigned int Class_1_D811CE24096BDBCA___c_TypeDefinitionIndex = 26296;

class Class_1_D811CE24096BDBCA___c : public ::System::Object
{
public:
	static ::Class_1_D811CE24096BDBCA___c** StaticGet___9()
	{
		return (::Class_1_D811CE24096BDBCA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D811CE24096BDBCA___c_TypeDefinitionIndex)->GetStaticField(0x121A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA___C__CTOR_OFFSET))(this);
	}

	::Class_1_D811CE24096BDBCA* __cctor_b__28_0()
	{
		return ((::Class_1_D811CE24096BDBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D811CE24096BDBCA___C___CCTOR_B__28_0_OFFSET))(this);
	}
};
