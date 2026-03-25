#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_3FF63E3B49DB868D_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0x11120650)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_2B9B111B4402E23A_OFFSET UNITYSDK_OFFSET(0x111200D0)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11120690)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11120590)
#define CLASS_1_3FF63E3B49DB868D_METHOD_1_E34E0CE2E527F293_OFFSET UNITYSDK_OFFSET(0x11120610)
#define CLASS_1_3FF63E3B49DB868D__CTOR_OFFSET UNITYSDK_OFFSET(0x11120740)

inline static constexpr unsigned int Class_1_3FF63E3B49DB868D_TypeDefinitionIndex = 59257;

class Class_1_3FF63E3B49DB868D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Animation* Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_1; // 0x20
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_2; // 0x28
	::Il2CppArray<::System::String*>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2B9B111B4402E23A(::UnityEngine::Transform* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_2B9B111B4402E23A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedModifierInstance* Method_1_E34E0CE2E527F293()
	{
		return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_E34E0CE2E527F293_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FF63E3B49DB868D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
