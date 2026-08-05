#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_D2084E0C2DD39509;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_456C5E3308C3E023___C_METHOD_1_D25406433BDF03C7_OFFSET UNITYSDK_OFFSET(0x15071470)
#define CLASS_3_456C5E3308C3E023___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15071420)
#define CLASS_3_456C5E3308C3E023___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15071460)

inline static constexpr unsigned int Class_3_456C5E3308C3E023___c_TypeDefinitionIndex = 40752;

class Class_3_456C5E3308C3E023___c : public ::System::Object
{
public:
	static ::Class_3_456C5E3308C3E023___c** StaticGet___9()
	{
		return (::Class_3_456C5E3308C3E023___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023___c_TypeDefinitionIndex)->GetStaticField(0x3BE50);
	}
	static ::System::Action_2<::Class_3_D2084E0C2DD39509*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::Class_3_D2084E0C2DD39509*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023___c_TypeDefinitionIndex)->GetStaticField(0x3BE58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D25406433BDF03C7(::Class_3_D2084E0C2DD39509* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D2084E0C2DD39509*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023___C_METHOD_1_D25406433BDF03C7_OFFSET))(this, a1, a2);
	}
};
