#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceTrapMonoView.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETRAVELATORMONOVIEW_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0x998A4E0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETRAVELATORMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x998A7C0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceTravelatorMonoView_TypeDefinitionIndex = 63617;

	class CakeRaceTravelatorMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceTrapMonoView
	{
	public:
		::UnityEngine::Vector4 OriginalSpeed; // 0x68
		::UnityEngine::Transform* FromBack; // 0x78
		::UnityEngine::Transform* FromLeft; // 0x80
		::UnityEngine::Transform* FromRight; // 0x88
		::System::Boolean _IsPlayingLastTime; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETRAVELATORMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void UpdateSpeed(::System::Single speedFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETRAVELATORMONOVIEW_UPDATESPEED_OFFSET))(this, speedFactor);
		}
	};
}
