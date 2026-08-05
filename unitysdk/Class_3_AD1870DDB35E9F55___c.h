#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_34783E6FF88E6D2D;
class Class_4_B99AA5AE371451AA;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_AD1870DDB35E9F55___C_METHOD_1_2E3DBD935535DC49_OFFSET UNITYSDK_OFFSET(0x15608DB0)
#define CLASS_3_AD1870DDB35E9F55___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15608D60)
#define CLASS_3_AD1870DDB35E9F55___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15608DA0)

inline static constexpr unsigned int Class_3_AD1870DDB35E9F55___c_TypeDefinitionIndex = 57723;

class Class_3_AD1870DDB35E9F55___c : public ::System::Object
{
public:
	static ::Class_3_AD1870DDB35E9F55___c** StaticGet___9()
	{
		return (::Class_3_AD1870DDB35E9F55___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AD1870DDB35E9F55___c_TypeDefinitionIndex)->GetStaticField(0x39630);
	}
	static ::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_4_34783E6FF88E6D2D*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_4_34783E6FF88E6D2D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AD1870DDB35E9F55___c_TypeDefinitionIndex)->GetStaticField(0x39638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AD1870DDB35E9F55___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD1870DDB35E9F55___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2E3DBD935535DC49(::Class_4_B99AA5AE371451AA* a1, ::Class_4_34783E6FF88E6D2D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B99AA5AE371451AA*, ::Class_4_34783E6FF88E6D2D*))((::PBYTE)hIl2Cpp + CLASS_3_AD1870DDB35E9F55___C_METHOD_1_2E3DBD935535DC49_OFFSET))(this, a1, a2);
	}
};
