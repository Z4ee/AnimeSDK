#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_E972752B9D4E2012___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CD76E0)
#define CLASS_2_E972752B9D4E2012___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD7720)
#define CLASS_2_E972752B9D4E2012___C___ONBINDHANDLERS_B__6_0_OFFSET UNITYSDK_OFFSET(0x8CD7730)

inline static constexpr unsigned int Class_2_E972752B9D4E2012___c_TypeDefinitionIndex = 59262;

class Class_2_E972752B9D4E2012___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E972752B9D4E2012___c_TypeDefinitionIndex)->GetStaticField(0xE210);
	}
	static ::Class_2_E972752B9D4E2012___c** StaticGet___9()
	{
		return (::Class_2_E972752B9D4E2012___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E972752B9D4E2012___c_TypeDefinitionIndex)->GetStaticField(0xE218);
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
