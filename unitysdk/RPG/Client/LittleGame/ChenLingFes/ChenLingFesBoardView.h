#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class ChenLingFesVCameraConfig; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1AC22900)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETBUILDVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1AC22B10)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETGAMEVCAMERAACTIVE_OFFSET UNITYSDK_OFFSET(0x1AC22D30)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETGAMEVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x1AC22C20)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETVCAMERAENABLED_OFFSET UNITYSDK_OFFSET(0x1AC22A70)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC22DA0)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBoardView_TypeDefinitionIndex = 77314;

	class ChenLingFesBoardView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* BuildVCamera; // 0x58
		::Cinemachine::CinemachineVirtualCamera* GameVCamera; // 0x60
		::Cinemachine::CinemachineBrain* CinemachineBrain; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_INIT_OFFSET))(this);
		}

		::System::Void SetVCameraEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETVCAMERAENABLED_OFFSET))(this, a1);
		}

		::System::Void SetBuildVCameraConfig(::RPG::GameCore::ChenLingFesVCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesVCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETBUILDVCAMERACONFIG_OFFSET))(this, a1);
		}

		::System::Void SetGameVCameraConfig(::RPG::GameCore::ChenLingFesVCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesVCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETGAMEVCAMERACONFIG_OFFSET))(this, a1);
		}

		::System::Void SetGameVCameraActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESBOARDVIEW_SETGAMEVCAMERAACTIVE_OFFSET))(this, a1);
		}
	};
}
