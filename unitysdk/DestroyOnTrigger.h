#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define DESTROYONTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xFF9D6B0)
#define DESTROYONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xFF9D800)

inline static constexpr unsigned int DestroyOnTrigger_TypeDefinitionIndex = 63659;

class DestroyOnTrigger : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* m_Tag; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESTROYONTRIGGER__CTOR_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + DESTROYONTRIGGER_ONTRIGGERENTER_OFFSET))(this, other);
	}
};
