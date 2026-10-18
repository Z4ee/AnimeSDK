#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_D8A9B7E75FE2A68B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x157EE7C0)
#define CLASS_2_D8A9B7E75FE2A68B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x157EE800)
#define CLASS_2_D8A9B7E75FE2A68B___C___ONBINDHANDLERS_B__6_0_OFFSET UNITYSDK_OFFSET(0x157EE810)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B___c_TypeDefinitionIndex = 72352;

class Class_2_D8A9B7E75FE2A68B___c : public ::System::Object
{
public:
	static ::Class_2_D8A9B7E75FE2A68B___c** StaticGet___9()
	{
		return (::Class_2_D8A9B7E75FE2A68B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8A9B7E75FE2A68B___c_TypeDefinitionIndex)->GetStaticField(0x6DDA0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8A9B7E75FE2A68B___c_TypeDefinitionIndex)->GetStaticField(0x6DDA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8A9B7E75FE2A68B___C___ONBINDHANDLERS_B__6_0_OFFSET))(this);
	}
};
