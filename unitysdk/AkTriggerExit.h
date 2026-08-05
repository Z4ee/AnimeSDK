#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGEREXIT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1ECD6B30)
#define AKTRIGGEREXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECD6CF0)

inline static constexpr unsigned int AkTriggerExit_TypeDefinitionIndex = 33824;

class AkTriggerExit : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGEREXIT__CTOR_OFFSET))(this);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* in_other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGEREXIT_ONTRIGGEREXIT_OFFSET))(this, in_other);
	}
};
