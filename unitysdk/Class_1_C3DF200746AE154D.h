#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3144EBBA3CB68CA;

#define CLASS_1_C3DF200746AE154D_METHOD_1_969F212C78F84301_OFFSET UNITYSDK_OFFSET(0x188D13A0)
#define CLASS_1_C3DF200746AE154D_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x188D1330)
#define CLASS_1_C3DF200746AE154D__CTOR_OFFSET UNITYSDK_OFFSET(0x188D1320)

inline static constexpr unsigned int Class_1_C3DF200746AE154D_TypeDefinitionIndex = 49433;

class Class_1_C3DF200746AE154D : public ::System::Object
{
public:
	static ::Class_1_C3DF200746AE154D** StaticGet_Field_1_0()
	{
		return (::Class_1_C3DF200746AE154D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3DF200746AE154D_TypeDefinitionIndex)->GetStaticField(0x47F80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3DF200746AE154D__CTOR_OFFSET))(this);
	}

	static ::Class_1_C3DF200746AE154D* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_C3DF200746AE154D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3DF200746AE154D_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Int32 Method_1_969F212C78F84301(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C3DF200746AE154D_METHOD_1_969F212C78F84301_OFFSET))(this, a1);
	}
};
