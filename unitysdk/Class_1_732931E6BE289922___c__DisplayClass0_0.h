#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define CLASS_1_732931E6BE289922___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__1_OFFSET UNITYSDK_OFFSET(0xD254CC0)
#define CLASS_1_732931E6BE289922___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__2_OFFSET UNITYSDK_OFFSET(0xD254CE0)
#define CLASS_1_732931E6BE289922___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD254BE0)

inline static constexpr unsigned int Class_1_732931E6BE289922___c__DisplayClass0_0_TypeDefinitionIndex = 50315;

class Class_1_732931E6BE289922___c__DisplayClass0_0 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityEvent* unityEvent; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsObservable_b__1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__1_OFFSET))(this, a1);
	}

	::System::Void _AsObservable_b__2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_732931E6BE289922___C__DISPLAYCLASS0_0__ASOBSERVABLE_B__2_OFFSET))(this, a1);
	}
};
