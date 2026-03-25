#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96C82B73FFE758FB;

#define CLASS_1_C3DF200746AE154D_METHOD_1_969F212C78F84301_OFFSET UNITYSDK_OFFSET(0x1069E1B0)
#define CLASS_1_C3DF200746AE154D_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1069E120)
#define CLASS_1_C3DF200746AE154D__CTOR_OFFSET UNITYSDK_OFFSET(0x1069E110)

inline static constexpr unsigned int Class_1_C3DF200746AE154D_TypeDefinitionIndex = 41844;

class Class_1_C3DF200746AE154D : public ::System::Object
{
public:
	static ::Class_1_C3DF200746AE154D** StaticGet_Field_1_0()
	{
		return (::Class_1_C3DF200746AE154D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3DF200746AE154D_TypeDefinitionIndex)->GetStaticField(0x272B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3DF200746AE154D__CTOR_OFFSET))(this);
	}

	static ::Class_1_C3DF200746AE154D* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_C3DF200746AE154D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3DF200746AE154D_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Int32 Method_1_969F212C78F84301(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C3DF200746AE154D_METHOD_1_969F212C78F84301_OFFSET))(this, a1);
	}
};
