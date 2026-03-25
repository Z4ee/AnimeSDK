#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceMonoView.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCameraMonoView_MoveCameraInfo; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MANUALSTART_OFFSET UNITYSDK_OFFSET(0x9986170)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MANUALSTOP_OFFSET UNITYSDK_OFFSET(0x99866F0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x9986320)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_TICKCAMERALIST_OFFSET UNITYSDK_OFFSET(0x99863B0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9986A50)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW__TRIGGERSTARTCAMERAEVENT_OFFSET UNITYSDK_OFFSET(0x99868E0)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceCameraMonoView_TypeDefinitionIndex = 63602;

	class CakeRaceCameraMonoView : public ::RPG::Client::LittleGame::CakeRace::CakeRaceMonoView
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraMonoView_MoveCameraInfo*>* StartCameraInfos; // 0x40
		::System::Action* OnStartFinish; // 0x48
		::System::Single m_curCameraTime; // 0x50
		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraMonoView_MoveCameraInfo* m_curInfo; // 0x58
		::System::Boolean TriggerStart; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW__CTOR_OFFSET))(this);
		}

		::System::Void ManualStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MANUALSTART_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MANUALUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void ManualStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_MANUALSTOP_OFFSET))(this);
		}

		::System::Boolean TickCameraList(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraMonoView_MoveCameraInfo*>* cameraInfoList, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraMonoView_MoveCameraInfo*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW_TICKCAMERALIST_OFFSET))(this, cameraInfoList, deltaTime);
		}

		::System::Void _TriggerStartCameraEvent(::System::Int32 camIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACECAMERAMONOVIEW__TRIGGERSTARTCAMERAEVENT_OFFSET))(this, camIndex);
		}
	};
}
