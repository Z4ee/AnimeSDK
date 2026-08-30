#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_314B32ACA2E06A03;

#define CLASS_1_314B32ACA2E06A03___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D804F60)
#define CLASS_1_314B32ACA2E06A03___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D804F90)
#define CLASS_1_314B32ACA2E06A03___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1D804FA0)

inline static constexpr unsigned int Class_1_314B32ACA2E06A03___c_TypeDefinitionIndex = 27302;

class Class_1_314B32ACA2E06A03___c : public ::System::Object
{
public:
	static ::Class_1_314B32ACA2E06A03___c** StaticGet___9()
	{
		return (::Class_1_314B32ACA2E06A03___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_314B32ACA2E06A03___c_TypeDefinitionIndex)->GetStaticField(0x5F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03___C__CTOR_OFFSET))(this);
	}

	::Class_1_314B32ACA2E06A03* __cctor_b__38_0()
	{
		return ((::Class_1_314B32ACA2E06A03*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_314B32ACA2E06A03___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
