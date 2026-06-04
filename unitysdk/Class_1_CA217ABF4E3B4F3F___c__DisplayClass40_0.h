#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CA217ABF4E3B4F3F;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CA217ABF4E3B4F3F___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137C5180)
#define CLASS_1_CA217ABF4E3B4F3F___C__DISPLAYCLASS40_0___ASYNCLOADPREFAB_B__0_OFFSET UNITYSDK_OFFSET(0x137C65F0)

inline static constexpr unsigned int Class_1_CA217ABF4E3B4F3F___c__DisplayClass40_0_TypeDefinitionIndex = 68199;

class Class_1_CA217ABF4E3B4F3F___c__DisplayClass40_0 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::GameObject*>* callback; // 0x10
	::Class_1_CA217ABF4E3B4F3F* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}

	::System::Void __AsyncLoadPrefab_b__0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_CA217ABF4E3B4F3F___C__DISPLAYCLASS40_0___ASYNCLOADPREFAB_B__0_OFFSET))(this, a1);
	}
};
