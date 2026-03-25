#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINE_AUTOOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BFAF80)
#define AKSOUNDENGINE_AUTOOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFAC90)

inline static constexpr unsigned int AkSoundEngine_AutoObject_TypeDefinitionIndex = 34539;

class AkSoundEngine_AutoObject : public ::System::Object
{
public:
	::UnityEngine::GameObject* gameObject; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* go)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_AUTOOBJECT__CTOR_OFFSET))(this, go);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_AUTOOBJECT_FINALIZE_OFFSET))(this);
	}
};
