#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEPICKUPITEMMONOVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4CAF80)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEPICKUPITEMMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CB3A0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRacePickupItemMonoView_TypeDefinitionIndex = 77685;

	class CakeRacePickupItemMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::UnityEngine::Transform* CanvasUI; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEPICKUPITEMMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEPICKUPITEMMONOVIEW_UPDATE_OFFSET))(this);
		}
	};
}
