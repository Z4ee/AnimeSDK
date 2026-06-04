#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303C348321583F23;

#define CLASS_1_303C348321583F23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6EFA10)
#define CLASS_1_303C348321583F23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EFA50)
#define CLASS_1_303C348321583F23___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1A6EFA60)

inline static constexpr unsigned int Class_1_303C348321583F23___c_TypeDefinitionIndex = 26247;

class Class_1_303C348321583F23___c : public ::System::Object
{
public:
	static ::Class_1_303C348321583F23___c** StaticGet___9()
	{
		return (::Class_1_303C348321583F23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_303C348321583F23___c_TypeDefinitionIndex)->GetStaticField(0x34610);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_303C348321583F23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303C348321583F23___C__CTOR_OFFSET))(this);
	}

	::Class_1_303C348321583F23* __cctor_b__42_0()
	{
		return ((::Class_1_303C348321583F23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_303C348321583F23___C___CCTOR_B__42_0_OFFSET))(this);
	}
};
