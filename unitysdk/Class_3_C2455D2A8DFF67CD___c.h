#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_C2455D2A8DFF67CD___C_METHOD_1_4BDCD8817E21E5A1_OFFSET UNITYSDK_OFFSET(0x16848A50)
#define CLASS_3_C2455D2A8DFF67CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16848A00)
#define CLASS_3_C2455D2A8DFF67CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16848A40)

inline static constexpr unsigned int Class_3_C2455D2A8DFF67CD___c_TypeDefinitionIndex = 85183;

class Class_3_C2455D2A8DFF67CD___c : public ::System::Object
{
public:
	static ::Class_3_C2455D2A8DFF67CD___c** StaticGet___9()
	{
		return (::Class_3_C2455D2A8DFF67CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2455D2A8DFF67CD___c_TypeDefinitionIndex)->GetStaticField(0x4EF00);
	}
	static ::System::Action_1<::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C2455D2A8DFF67CD___c_TypeDefinitionIndex)->GetStaticField(0x4EF08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BDCD8817E21E5A1(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_C2455D2A8DFF67CD___C_METHOD_1_4BDCD8817E21E5A1_OFFSET))(this, a1);
	}
};
