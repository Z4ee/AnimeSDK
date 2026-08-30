#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERCOLLISIONEXIT_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1D2D6010)
#define AKTRIGGERCOLLISIONEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D6120)

inline static constexpr unsigned int AkTriggerCollisionExit_TypeDefinitionIndex = 43770;

class AkTriggerCollisionExit : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONEXIT__CTOR_OFFSET))(this);
	}

	::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONEXIT_ONCOLLISIONEXIT_OFFSET))(this, a1);
	}
};
