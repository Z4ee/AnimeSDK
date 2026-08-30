#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCellMonoView.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETRAPMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC132F0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceTrapMonoView_TypeDefinitionIndex = 77687;

	class CakeRaceTrapMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceCellMonoView
	{
	public:
		::UnityEngine::Animator* Animator; // 0x48
		::UnityEngine::GameObject* InactiveEffect; // 0x50
		::UnityEngine::Transform* BubbleBreakEffectRoot; // 0x58
		::UnityEngine::Transform* EffectRoot; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACETRAPMONOVIEW__CTOR_OFFSET))(this);
		}
	};
}
