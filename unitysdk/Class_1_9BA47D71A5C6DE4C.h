#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_9BA47D71A5C6DE4C_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x147E2770)
#define CLASS_1_9BA47D71A5C6DE4C_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x147E2760)
#define CLASS_1_9BA47D71A5C6DE4C__CTOR_OFFSET UNITYSDK_OFFSET(0x147E27B0)

inline static constexpr unsigned int Class_1_9BA47D71A5C6DE4C_TypeDefinitionIndex = 68234;

class Class_1_9BA47D71A5C6DE4C : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_9BA47D71A5C6DE4C__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA47D71A5C6DE4C_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA47D71A5C6DE4C_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}
};
