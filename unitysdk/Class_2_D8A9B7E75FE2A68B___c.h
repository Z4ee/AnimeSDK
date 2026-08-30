#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_D8A9B7E75FE2A68B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15527AA0)
#define CLASS_2_D8A9B7E75FE2A68B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15527AE0)
#define CLASS_2_D8A9B7E75FE2A68B___C___ONBINDHANDLERS_B__6_0_OFFSET UNITYSDK_OFFSET(0x15527AF0)

inline static constexpr unsigned int Class_2_D8A9B7E75FE2A68B___c_TypeDefinitionIndex = 72279;

class Class_2_D8A9B7E75FE2A68B___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8A9B7E75FE2A68B___c_TypeDefinitionIndex)->GetStaticField(0x3BA0);
	}
	static ::Class_2_D8A9B7E75FE2A68B___c** StaticGet___9()
	{
		return (::Class_2_D8A9B7E75FE2A68B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D8A9B7E75FE2A68B___c_TypeDefinitionIndex)->GetStaticField(0x3BA8);
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
