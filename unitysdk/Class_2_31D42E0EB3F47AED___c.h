#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6FECDA67F0DB5C3;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_31D42E0EB3F47AED___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x12AFCCE0)
#define CLASS_2_31D42E0EB3F47AED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AFCC90)
#define CLASS_2_31D42E0EB3F47AED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12AFCCD0)

inline static constexpr unsigned int Class_2_31D42E0EB3F47AED___c_TypeDefinitionIndex = 46058;

class Class_2_31D42E0EB3F47AED___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_1_B6FECDA67F0DB5C3*>** StaticGet___9__157_0()
	{
		return (::System::Predicate_1<::Class_1_B6FECDA67F0DB5C3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D42E0EB3F47AED___c_TypeDefinitionIndex)->GetStaticField(0x392F0);
	}
	static ::Class_2_31D42E0EB3F47AED___c** StaticGet___9()
	{
		return (::Class_2_31D42E0EB3F47AED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31D42E0EB3F47AED___c_TypeDefinitionIndex)->GetStaticField(0x392F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_B6FECDA67F0DB5C3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B6FECDA67F0DB5C3*))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
