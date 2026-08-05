#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_8DE695ECCCB0EC2E___C_METHOD_1_011FAB9F159C12A7_OFFSET UNITYSDK_OFFSET(0x16193740)
#define CLASS_2_8DE695ECCCB0EC2E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161936F0)
#define CLASS_2_8DE695ECCCB0EC2E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16193730)

inline static constexpr unsigned int Class_2_8DE695ECCCB0EC2E___c_TypeDefinitionIndex = 44023;

class Class_2_8DE695ECCCB0EC2E___c : public ::System::Object
{
public:
	static ::Class_2_8DE695ECCCB0EC2E___c** StaticGet___9()
	{
		return (::Class_2_8DE695ECCCB0EC2E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8DE695ECCCB0EC2E___c_TypeDefinitionIndex)->GetStaticField(0x45FA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_011FAB9F159C12A7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8DE695ECCCB0EC2E___C_METHOD_1_011FAB9F159C12A7_OFFSET))(this, a1, a2);
	}
};
