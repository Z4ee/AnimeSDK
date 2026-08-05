#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
class Class_4_C2BA23F5AA27FA67;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_4311AF09DCA0996A___C_METHOD_1_CA708ECB3845E9C8_OFFSET UNITYSDK_OFFSET(0x1158F9E0)
#define CLASS_4_4311AF09DCA0996A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1158F990)
#define CLASS_4_4311AF09DCA0996A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1158F9D0)

inline static constexpr unsigned int Class_4_4311AF09DCA0996A___c_TypeDefinitionIndex = 78184;

class Class_4_4311AF09DCA0996A___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4311AF09DCA0996A___c_TypeDefinitionIndex)->GetStaticField(0x35E80);
	}
	static ::Class_4_4311AF09DCA0996A___c** StaticGet___9()
	{
		return (::Class_4_4311AF09DCA0996A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_4311AF09DCA0996A___c_TypeDefinitionIndex)->GetStaticField(0x35E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA708ECB3845E9C8(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C2BA23F5AA27FA67*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_4_4311AF09DCA0996A___C_METHOD_1_CA708ECB3845E9C8_OFFSET))(this, a1, a2);
	}
};
