#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOHANDKILLTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C9300)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoHandKillTrigger_TypeDefinitionIndex = 63419;

	class MonoHandKillTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Collider; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHANDKILLTRIGGER__CTOR_OFFSET))(this);
		}
	};
}
