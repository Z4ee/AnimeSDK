#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"

namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineSmoothPath; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCameraMonoView; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA6787A0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceFieldMonoView_TypeDefinitionIndex = 71650;

	class CakeRaceFieldMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::Cinemachine::CinemachineSmoothPath* Path; // 0x40
		::Cinemachine::CinemachineDollyCart* DollyCart; // 0x48
		::UnityEngine::Transform* CameraRoot; // 0x50
		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraMonoView* GameStartCamera; // 0x58
		::Cinemachine::CinemachineVirtualCamera* FollowCamera; // 0x60
		::Cinemachine::CinemachineVirtualCamera* FreeLookCamera; // 0x68
		::Cinemachine::CinemachineVirtualCamera* SectionShowCamera; // 0x70
		::UnityEngine::AnimationCurve* SectionShowSpeedCurve; // 0x78
		::UnityEngine::Transform* CellRoot; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEFIELDMONOVIEW__CTOR_OFFSET))(this);
		}
	};
}
