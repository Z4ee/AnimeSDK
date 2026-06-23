#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_846182BC37DE078E_1;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_B3C4233791245457___C_METHOD_1_63500C779D0E514F_OFFSET UNITYSDK_OFFSET(0x153B8870)
#define CLASS_3_B3C4233791245457___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x153B8820)
#define CLASS_3_B3C4233791245457___C__CTOR_OFFSET UNITYSDK_OFFSET(0x153B8860)

inline static constexpr unsigned int Class_3_B3C4233791245457___c_TypeDefinitionIndex = 87317;

class Class_3_B3C4233791245457___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_846182BC37DE078E_1*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_846182BC37DE078E_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3C4233791245457___c_TypeDefinitionIndex)->GetStaticField(0x408E0);
	}
	static ::Class_3_B3C4233791245457___c** StaticGet___9()
	{
		return (::Class_3_B3C4233791245457___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B3C4233791245457___c_TypeDefinitionIndex)->GetStaticField(0x408E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_63500C779D0E514F(::Class_3_846182BC37DE078E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_846182BC37DE078E_1*))((::PBYTE)hIl2Cpp + CLASS_3_B3C4233791245457___C_METHOD_1_63500C779D0E514F_OFFSET))(this, a1);
	}
};
