#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_31A2E0B8098B4B5B___C_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x119825D0)
#define CLASS_2_31A2E0B8098B4B5B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11982580)
#define CLASS_2_31A2E0B8098B4B5B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x119825C0)

inline static constexpr unsigned int Class_2_31A2E0B8098B4B5B___c_TypeDefinitionIndex = 49094;

class Class_2_31A2E0B8098B4B5B___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__14_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31A2E0B8098B4B5B___c_TypeDefinitionIndex)->GetStaticField(0x44D20);
	}
	static ::Class_2_31A2E0B8098B4B5B___c** StaticGet___9()
	{
		return (::Class_2_31A2E0B8098B4B5B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_31A2E0B8098B4B5B___c_TypeDefinitionIndex)->GetStaticField(0x44D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31A2E0B8098B4B5B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31A2E0B8098B4B5B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31A2E0B8098B4B5B___C_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}
};
