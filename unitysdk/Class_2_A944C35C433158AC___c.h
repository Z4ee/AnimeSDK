#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_A944C35C433158AC___C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1659CF40)
#define CLASS_2_A944C35C433158AC___C_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0x1659CE30)
#define CLASS_2_A944C35C433158AC___C_METHOD_1_E1C47ED2E76F15D6_OFFSET UNITYSDK_OFFSET(0x1659CE20)
#define CLASS_2_A944C35C433158AC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1659CDD0)
#define CLASS_2_A944C35C433158AC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1659CE10)

inline static constexpr unsigned int Class_2_A944C35C433158AC___c_TypeDefinitionIndex = 62056;

class Class_2_A944C35C433158AC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__21_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A944C35C433158AC___c_TypeDefinitionIndex)->GetStaticField(0x37450);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>** StaticGet___9__21_2()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A944C35C433158AC___c_TypeDefinitionIndex)->GetStaticField(0x37458);
	}
	static ::System::Func_1<::System::UInt32>** StaticGet___9__21_4()
	{
		return (::System::Func_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A944C35C433158AC___c_TypeDefinitionIndex)->GetStaticField(0x37460);
	}
	static ::Class_2_A944C35C433158AC___c** StaticGet___9()
	{
		return (::Class_2_A944C35C433158AC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A944C35C433158AC___c_TypeDefinitionIndex)->GetStaticField(0x37468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E1C47ED2E76F15D6(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC___C_METHOD_1_E1C47ED2E76F15D6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC___C_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A944C35C433158AC___C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
