#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERCOLLISIONENTER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1A66C650)
#define AKTRIGGERCOLLISIONENTER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A66C750)
#define AKTRIGGERCOLLISIONENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66C810)

inline static constexpr unsigned int AkTriggerCollisionEnter_TypeDefinitionIndex = 40516;

class AkTriggerCollisionEnter : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER__CTOR_OFFSET))(this);
	}

	::System::Void OnCollisionEnter(::UnityEngine::Collision* in_other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER_ONCOLLISIONENTER_OFFSET))(this, in_other);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* in_other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONENTER_ONTRIGGERENTER_OFFSET))(this, in_other);
	}
};
