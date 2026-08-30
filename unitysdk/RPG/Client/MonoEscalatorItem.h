#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoMovementPropHandle; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOESCALATORITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD825650)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEscalatorItem_TypeDefinitionIndex = 68556;

	class MonoEscalatorItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single length; // 0x18
		::UnityEngine::Collider* stageCollider; // 0x20
		::RPG::Client::MonoMovementPropHandle* PropMovementHandle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOESCALATORITEM__CTOR_OFFSET))(this);
		}
	};
}
