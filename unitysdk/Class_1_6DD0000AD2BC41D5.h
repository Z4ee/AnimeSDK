#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6DD0000AD2BC41D5_METHOD_1_E3812F04B2228A8B_OFFSET UNITYSDK_OFFSET(0x185FE8D0)
#define CLASS_1_6DD0000AD2BC41D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x185FE8B0)

inline static constexpr unsigned int Class_1_6DD0000AD2BC41D5_TypeDefinitionIndex = 90800;

class Class_1_6DD0000AD2BC41D5 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DD0000AD2BC41D5_TypeDefinitionIndex)->GetStaticField(0x124C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DD0000AD2BC41D5_TypeDefinitionIndex)->GetStaticField(0x124C4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DD0000AD2BC41D5__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6DD0000AD2BC41D5_METHOD_1_E3812F04B2228A8B_OFFSET))(a1);
	}
};
