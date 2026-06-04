#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A2AC37C284FAE935;

#define CLASS_1_A2AC37C284FAE935___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A777E10)
#define CLASS_1_A2AC37C284FAE935___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A777E40)
#define CLASS_1_A2AC37C284FAE935___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A777E50)

inline static constexpr unsigned int Class_1_A2AC37C284FAE935___c_TypeDefinitionIndex = 33140;

class Class_1_A2AC37C284FAE935___c : public ::System::Object
{
public:
	static ::Class_1_A2AC37C284FAE935___c** StaticGet___9()
	{
		return (::Class_1_A2AC37C284FAE935___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A2AC37C284FAE935___c_TypeDefinitionIndex)->GetStaticField(0x45FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935___C__CTOR_OFFSET))(this);
	}

	::Class_1_A2AC37C284FAE935* __cctor_b__38_0()
	{
		return ((::Class_1_A2AC37C284FAE935*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2AC37C284FAE935___C___CCTOR_B__38_0_OFFSET))(this);
	}
};
