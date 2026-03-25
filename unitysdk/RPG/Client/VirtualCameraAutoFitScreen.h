#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_REINIT_OFFSET UNITYSDK_OFFSET(0xA773770)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_SETFITRATIOX_OFFSET UNITYSDK_OFFSET(0xA7737C0)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STARTUPDATE_OFFSET UNITYSDK_OFFSET(0xA773720)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0xA773650)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATETRACKOBJECTOFFSET_OFFSET UNITYSDK_OFFSET(0xA7736A0)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA772960)
#define RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN__CTOR_OFFSET UNITYSDK_OFFSET(0xA773820)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCameraAutoFitScreen_TypeDefinitionIndex = 55770;

	class VirtualCameraAutoFitScreen : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_8; // 0x0
		::UnityEngine::Vector3 TrackObjectOffset; // 0x18
		::System::Boolean DisableAdaptOver16by9; // 0x24
		::UnityEngine::Matrix4x4 Field_5_2; // 0x28
		::UnityEngine::Vector3 Field_5_3; // 0x68
		::UnityEngine::Vector3 Field_5_4; // 0x74
		::Cinemachine::CinemachineVirtualCamera* Field_5_5; // 0x80
		::System::Boolean Field_5_6; // 0x88
		::System::Boolean Field_5_7; // 0x89
		::System::Boolean Field_5_9; // 0x8A
		::System::Single Field_5_10; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateTrackObjectOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_UPDATETRACKOBJECTOFFSET_OFFSET))(this, a1);
		}

		::System::Void StartUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STARTUPDATE_OFFSET))(this);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_STOPUPDATE_OFFSET))(this);
		}

		::System::Void ReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_REINIT_OFFSET))(this);
		}

		::System::Void SetFitRatioX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCAMERAAUTOFITSCREEN_SETFITRATIOX_OFFSET))(this, a1);
		}
	};
}
