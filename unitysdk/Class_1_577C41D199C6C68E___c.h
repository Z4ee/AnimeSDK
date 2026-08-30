#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_577C41D199C6C68E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FB5CB0)
#define CLASS_1_577C41D199C6C68E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB5CF0)
#define CLASS_1_577C41D199C6C68E___C___CTOR_B__27_0_OFFSET UNITYSDK_OFFSET(0x16FB5D00)
#define CLASS_1_577C41D199C6C68E___C___CTOR_B__27_2_OFFSET UNITYSDK_OFFSET(0x16FB5D10)

inline static constexpr unsigned int Class_1_577C41D199C6C68E___c_TypeDefinitionIndex = 50379;

class Class_1_577C41D199C6C68E___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__27_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C41D199C6C68E___c_TypeDefinitionIndex)->GetStaticField(0x652C0);
	}
	static ::System::Action** StaticGet___9__27_2()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C41D199C6C68E___c_TypeDefinitionIndex)->GetStaticField(0x652C8);
	}
	static ::Class_1_577C41D199C6C68E___c** StaticGet___9()
	{
		return (::Class_1_577C41D199C6C68E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C41D199C6C68E___c_TypeDefinitionIndex)->GetStaticField(0x652D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E___C__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__27_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E___C___CTOR_B__27_0_OFFSET))(this);
	}

	::System::Void __ctor_b__27_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_577C41D199C6C68E___C___CTOR_B__27_2_OFFSET))(this);
	}
};
