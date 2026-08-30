#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameNotify/ScoreType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_ADDSCORETOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B4260)

namespace RPG::Client::LittleGame::FiveDim::MiniGameNotify
{
	inline static constexpr unsigned int AddScoreToast_TypeDefinitionIndex = 76774;

	class AddScoreToast : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 WorldPos; // 0x10
		::System::Int32 AddScore; // 0x1C
		::RPG::Client::LittleGame::FiveDim::MiniGameNotify::ScoreType ScoreType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MINIGAMENOTIFY_ADDSCORETOAST__CTOR_OFFSET))(this);
		}
	};
}
