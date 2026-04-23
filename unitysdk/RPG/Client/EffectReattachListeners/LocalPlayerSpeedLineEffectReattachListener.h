#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECTREATTACHLISTENERS_LOCALPLAYERSPEEDLINEEFFECTREATTACHLISTENER_ONREATTACHENTITY_OFFSET UNITYSDK_OFFSET(0xA1B8930)
#define RPG_CLIENT_EFFECTREATTACHLISTENERS_LOCALPLAYERSPEEDLINEEFFECTREATTACHLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B8A20)

namespace RPG::Client::EffectReattachListeners
{
	inline static constexpr unsigned int LocalPlayerSpeedLineEffectReattachListener_TypeDefinitionIndex = 67831;

	class LocalPlayerSpeedLineEffectReattachListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ParticleSystem* TargetParticleSystem; // 0x18
		::UnityEngine::Vector3 normalScale; // 0x20
		::UnityEngine::Vector3 kidScale; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTREATTACHLISTENERS_LOCALPLAYERSPEEDLINEEFFECTREATTACHLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void OnReattachEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTREATTACHLISTENERS_LOCALPLAYERSPEEDLINEEFFECTREATTACHLISTENER_ONREATTACHENTITY_OFFSET))(this, a1);
		}
	};
}
