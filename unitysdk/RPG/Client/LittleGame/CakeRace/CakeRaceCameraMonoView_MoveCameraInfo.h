#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MOVECAMERAINFO_FINISH_OFFSET UNITYSDK_OFFSET(0x1C4C86A0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MOVECAMERAINFO_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1C4C8890)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MOVECAMERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C88A0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCameraMonoView_MoveCameraInfo_TypeDefinitionIndex = 77674;

	class CakeRaceCameraMonoView_MoveCameraInfo : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineDollyCart* Cart; // 0x10
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x18
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x20
		::System::Single FinishTime; // 0x28
		::System::Single m_initSpeed; // 0x2C
		::System::Boolean NeedKeep; // 0x30
		::System::Boolean m_isFinish; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MOVECAMERAINFO__CTOR_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MOVECAMERAINFO_FINISH_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MOVECAMERAINFO_GET_ISFINISH_OFFSET))(this);
		}
	};
}
