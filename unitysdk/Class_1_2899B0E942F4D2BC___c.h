#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_055C5EAE0A9ABD4D;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_2899B0E942F4D2BC___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x12A9E290)
#define CLASS_1_2899B0E942F4D2BC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A9E240)
#define CLASS_1_2899B0E942F4D2BC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9E280)

inline static constexpr unsigned int Class_1_2899B0E942F4D2BC___c_TypeDefinitionIndex = 45219;

class Class_1_2899B0E942F4D2BC___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_055C5EAE0A9ABD4D*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::Class_1_055C5EAE0A9ABD4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2899B0E942F4D2BC___c_TypeDefinitionIndex)->GetStaticField(0x38980);
	}
	static ::Class_1_2899B0E942F4D2BC___c** StaticGet___9()
	{
		return (::Class_1_2899B0E942F4D2BC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2899B0E942F4D2BC___c_TypeDefinitionIndex)->GetStaticField(0x38988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_055C5EAE0A9ABD4D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_055C5EAE0A9ABD4D*))((::PBYTE)hIl2Cpp + CLASS_1_2899B0E942F4D2BC___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
