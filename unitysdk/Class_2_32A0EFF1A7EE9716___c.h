#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_32A0EFF1A7EE9716___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x13B0B2F0)
#define CLASS_2_32A0EFF1A7EE9716___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B0B2A0)
#define CLASS_2_32A0EFF1A7EE9716___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B0B2E0)

inline static constexpr unsigned int Class_2_32A0EFF1A7EE9716___c_TypeDefinitionIndex = 80344;

class Class_2_32A0EFF1A7EE9716___c : public ::System::Object
{
public:
	static ::Class_2_32A0EFF1A7EE9716___c** StaticGet___9()
	{
		return (::Class_2_32A0EFF1A7EE9716___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_32A0EFF1A7EE9716___c_TypeDefinitionIndex)->GetStaticField(0x36650);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_9()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_32A0EFF1A7EE9716___c_TypeDefinitionIndex)->GetStaticField(0x36658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_32A0EFF1A7EE9716___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A0EFF1A7EE9716___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32A0EFF1A7EE9716___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
