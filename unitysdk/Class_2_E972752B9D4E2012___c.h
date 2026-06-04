#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E972752B9D4E2012___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1375DDA0)
#define CLASS_2_E972752B9D4E2012___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1375DDE0)
#define CLASS_2_E972752B9D4E2012___C___ONBINDHANDLERS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1375DDF0)

inline static constexpr unsigned int Class_2_E972752B9D4E2012___c_TypeDefinitionIndex = 67595;

class Class_2_E972752B9D4E2012___c : public ::System::Object
{
public:
	static ::Class_2_E972752B9D4E2012___c** StaticGet___9()
	{
		return (::Class_2_E972752B9D4E2012___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E972752B9D4E2012___c_TypeDefinitionIndex)->GetStaticField(0x54820);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E972752B9D4E2012___c_TypeDefinitionIndex)->GetStaticField(0x54828);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E972752B9D4E2012___C___ONBINDHANDLERS_B__6_0_OFFSET))(this);
	}
};
