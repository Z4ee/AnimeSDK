#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6B90C9F119FE08BB;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_DA539FBD5153C34F___C_METHOD_1_3F044A05A1B794B5_OFFSET UNITYSDK_OFFSET(0x11413140)
#define CLASS_3_DA539FBD5153C34F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114130F0)
#define CLASS_3_DA539FBD5153C34F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11413130)

inline static constexpr unsigned int Class_3_DA539FBD5153C34F___c_TypeDefinitionIndex = 49875;

class Class_3_DA539FBD5153C34F___c : public ::System::Object
{
public:
	static ::Class_3_DA539FBD5153C34F___c** StaticGet___9()
	{
		return (::Class_3_DA539FBD5153C34F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA539FBD5153C34F___c_TypeDefinitionIndex)->GetStaticField(0x47580);
	}
	static ::System::Action_1<::Class_3_6B90C9F119FE08BB*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_6B90C9F119FE08BB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA539FBD5153C34F___c_TypeDefinitionIndex)->GetStaticField(0x47588);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DA539FBD5153C34F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA539FBD5153C34F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F044A05A1B794B5(::Class_3_6B90C9F119FE08BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6B90C9F119FE08BB*))((::PBYTE)hIl2Cpp + CLASS_3_DA539FBD5153C34F___C_METHOD_1_3F044A05A1B794B5_OFFSET))(this, a1);
	}
};
