#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERCOLLISIONENTER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1B4B7550)
#define AKTRIGGERCOLLISIONENTER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1B4B7660)
#define AKTRIGGERCOLLISIONENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B7730)

inline static constexpr unsigned int AkTriggerCollisionEnter_TypeDefinitionIndex = 41343;

class AkTriggerCollisionEnter : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER__CTOR_OFFSET))(this);
	}

	::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER_ONCOLLISIONENTER_OFFSET))(this, a1);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER_ONTRIGGERENTER_OFFSET))(this, a1);
	}
};
