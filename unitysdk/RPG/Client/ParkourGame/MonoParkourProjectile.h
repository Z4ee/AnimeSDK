#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3366D0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourProjectile_TypeDefinitionIndex = 69234;

	class MonoParkourProjectile : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ParkourGame::EffectConfig FireEffect; // 0x18
		::RPG::Client::ParkourGame::EffectConfig HitEffect; // 0x40
		::System::String* FireAttachPoint; // 0x68
		::System::String* HitAttachPoint; // 0x70
		::System::Single FireSpeed; // 0x78
		::System::Single FireRotateHalfTime; // 0x7C
		::System::Int32 HitModifyEngineLevel; // 0x80
		::System::Int32 HitModifierPriority; // 0x84
		::System::Single HitModifierDuration; // 0x88
		::System::Single HitDelSpeedValue; // 0x8C
		::System::Single RaycastDistance; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURPROJECTILE__CTOR_OFFSET))(this);
		}
	};
}
