#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_B3147C5D3A9ADE43___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x15639930)
#define CLASS_2_B3147C5D3A9ADE43___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x156398A0)
#define CLASS_2_B3147C5D3A9ADE43___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15639850)
#define CLASS_2_B3147C5D3A9ADE43___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15639890)

inline static constexpr unsigned int Class_2_B3147C5D3A9ADE43___c_TypeDefinitionIndex = 73645;

class Class_2_B3147C5D3A9ADE43___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3147C5D3A9ADE43___c_TypeDefinitionIndex)->GetStaticField(0x2FA60);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__8_20()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3147C5D3A9ADE43___c_TypeDefinitionIndex)->GetStaticField(0x2FA68);
	}
	static ::Class_2_B3147C5D3A9ADE43___c** StaticGet___9()
	{
		return (::Class_2_B3147C5D3A9ADE43___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B3147C5D3A9ADE43___c_TypeDefinitionIndex)->GetStaticField(0x2FA70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B3147C5D3A9ADE43___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3147C5D3A9ADE43___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3147C5D3A9ADE43___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3147C5D3A9ADE43___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
