#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define AKSOUNDENGINE_AUTOOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4816F0)
#define AKSOUNDENGINE_AUTOOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B481440)

inline static constexpr unsigned int AkSoundEngine_AutoObject_TypeDefinitionIndex = 41185;

class AkSoundEngine_AutoObject : public ::System::Object
{
public:
	::UnityEngine::GameObject* gameObject; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_AUTOOBJECT__CTOR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOUNDENGINE_AUTOOBJECT_FINALIZE_OFFSET))(this);
	}
};
