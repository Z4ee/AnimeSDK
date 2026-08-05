#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_76D6343FCF0C151E___C_METHOD_1_AD69C1A85F86BF14_OFFSET UNITYSDK_OFFSET(0xF09A7E0)
#define CLASS_1_76D6343FCF0C151E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF09A790)
#define CLASS_1_76D6343FCF0C151E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF09A7D0)

inline static constexpr unsigned int Class_1_76D6343FCF0C151E___c_TypeDefinitionIndex = 81656;

class Class_1_76D6343FCF0C151E___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_D375C91CCE5D3999*>** StaticGet___9__28_0()
	{
		return (::System::Action_1<::Class_1_D375C91CCE5D3999*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D6343FCF0C151E___c_TypeDefinitionIndex)->GetStaticField(0x4C730);
	}
	static ::Class_1_76D6343FCF0C151E___c** StaticGet___9()
	{
		return (::Class_1_76D6343FCF0C151E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D6343FCF0C151E___c_TypeDefinitionIndex)->GetStaticField(0x4C738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76D6343FCF0C151E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D6343FCF0C151E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD69C1A85F86BF14(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_1_76D6343FCF0C151E___C_METHOD_1_AD69C1A85F86BF14_OFFSET))(this, a1);
	}
};
