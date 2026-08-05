#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_8AF049D3FC4ACD3E___C_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18612700)
#define CLASS_2_8AF049D3FC4ACD3E___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x18612670)
#define CLASS_2_8AF049D3FC4ACD3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18612620)
#define CLASS_2_8AF049D3FC4ACD3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18612660)

inline static constexpr unsigned int Class_2_8AF049D3FC4ACD3E___c_TypeDefinitionIndex = 66126;

class Class_2_8AF049D3FC4ACD3E___c : public ::System::Object
{
public:
	static ::Class_2_8AF049D3FC4ACD3E___c** StaticGet___9()
	{
		return (::Class_2_8AF049D3FC4ACD3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AF049D3FC4ACD3E___c_TypeDefinitionIndex)->GetStaticField(0x314E0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AF049D3FC4ACD3E___c_TypeDefinitionIndex)->GetStaticField(0x314E8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__7_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8AF049D3FC4ACD3E___c_TypeDefinitionIndex)->GetStaticField(0x314F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8AF049D3FC4ACD3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AF049D3FC4ACD3E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AF049D3FC4ACD3E___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AF049D3FC4ACD3E___C_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
