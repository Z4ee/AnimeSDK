#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_01B94E8A7E4DDFF4_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xE849700)
#define CLASS_1_01B94E8A7E4DDFF4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE8496F0)

inline static constexpr unsigned int Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex = 78756;

class Class_1_01B94E8A7E4DDFF4_1 : public ::System::Object
{
public:
	static ::System::String** StaticGet_NCECAMLOOMI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x5AA50);
	}
	static ::System::String** StaticGet_OIPFHHEPHBH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x5AA58);
	}
	static ::System::String** StaticGet_FHMMAOOCOPN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x5AA60);
	}
	static ::System::String** StaticGet_KENNHJJMKMN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x5AA68);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4_1__CCTOR_OFFSET))();
	}
};
