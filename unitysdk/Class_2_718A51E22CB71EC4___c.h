#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17628DBDBD20BE6F;
class Class_1_56A1684BE394769D;
class Class_1_D9413DC99216F54F;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_718A51E22CB71EC4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170AA310)
#define CLASS_2_718A51E22CB71EC4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170AA350)
#define CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_0_OFFSET UNITYSDK_OFFSET(0x170AA360)
#define CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_1_OFFSET UNITYSDK_OFFSET(0x170AA3F0)
#define CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_2_OFFSET UNITYSDK_OFFSET(0x170AA410)

inline static constexpr unsigned int Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex = 54526;

class Class_2_718A51E22CB71EC4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_D9413DC99216F54F*>** StaticGet___9__35_1()
	{
		return (::System::Action_1<::Class_1_D9413DC99216F54F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x5F720);
	}
	static ::System::Action_1<::Class_1_17628DBDBD20BE6F*>** StaticGet___9__35_2()
	{
		return (::System::Action_1<::Class_1_17628DBDBD20BE6F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x5F728);
	}
	static ::System::Action_1<::Class_1_56A1684BE394769D*>** StaticGet___9__35_0()
	{
		return (::System::Action_1<::Class_1_56A1684BE394769D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x5F730);
	}
	static ::Class_2_718A51E22CB71EC4___c** StaticGet___9()
	{
		return (::Class_2_718A51E22CB71EC4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_718A51E22CB71EC4___c_TypeDefinitionIndex)->GetStaticField(0x5F738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnPreInit_b__35_0(::Class_1_56A1684BE394769D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56A1684BE394769D*))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_0_OFFSET))(this, a1);
	}

	::System::Void _OnPreInit_b__35_1(::Class_1_D9413DC99216F54F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9413DC99216F54F*))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_1_OFFSET))(this, a1);
	}

	::System::Void _OnPreInit_b__35_2(::Class_1_17628DBDBD20BE6F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17628DBDBD20BE6F*))((::PBYTE)hIl2Cpp + CLASS_2_718A51E22CB71EC4___C__ONPREINIT_B__35_2_OFFSET))(this, a1);
	}
};
