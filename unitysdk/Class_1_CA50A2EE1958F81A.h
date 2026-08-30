#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA50A2EE1958F81A_Class_1_529AE99AC1EEDBC6;
class Class_4_6BD781EAA1CAFD20;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA50A2EE1958F81A_METHOD_1_3E3A2F79786A5D90_OFFSET UNITYSDK_OFFSET(0x1EADC0C0)
#define CLASS_1_CA50A2EE1958F81A_METHOD_1_D8440CF2300D7970_OFFSET UNITYSDK_OFFSET(0x1EADBA60)
#define CLASS_1_CA50A2EE1958F81A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADC2E0)

inline static constexpr unsigned int Class_1_CA50A2EE1958F81A_TypeDefinitionIndex = 42237;

class Class_1_CA50A2EE1958F81A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_4_6BD781EAA1CAFD20*>** StaticGet_DPNMPDAKOFJ()
	{
		return (::System::Collections::Generic::List_1<::Class_4_6BD781EAA1CAFD20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA50A2EE1958F81A_TypeDefinitionIndex)->GetStaticField(0x5E5E0);
	}
	static ::Class_1_CA50A2EE1958F81A_Class_1_529AE99AC1EEDBC6** StaticGet_JCLEAFEOFAL()
	{
		return (::Class_1_CA50A2EE1958F81A_Class_1_529AE99AC1EEDBC6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA50A2EE1958F81A_TypeDefinitionIndex)->GetStaticField(0x5E5E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA50A2EE1958F81A__CCTOR_OFFSET))();
	}

	static ::Class_4_6BD781EAA1CAFD20* Method_1_D8440CF2300D7970(::System::Int32 a1)
	{
		return ((::Class_4_6BD781EAA1CAFD20*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA50A2EE1958F81A_METHOD_1_D8440CF2300D7970_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E3A2F79786A5D90(::Class_4_6BD781EAA1CAFD20* a1)
	{
		return ((::System::Void(*)(::Class_4_6BD781EAA1CAFD20*))((::PBYTE)hIl2Cpp + CLASS_1_CA50A2EE1958F81A_METHOD_1_3E3A2F79786A5D90_OFFSET))(a1);
	}
};
