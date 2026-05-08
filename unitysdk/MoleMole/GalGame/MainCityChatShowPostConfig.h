#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_ANIMATIONID_OFFSET UNITYSDK_OFFSET(0x125CE200)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERA1POS_OFFSET UNITYSDK_OFFSET(0x125CE250)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERA2POS_OFFSET UNITYSDK_OFFSET(0x125CE2D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERARELAAVATAR_OFFSET UNITYSDK_OFFSET(0x125CE4F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERARELANPCID_OFFSET UNITYSDK_OFFSET(0x125CE4E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_FOVANDBLEND_OFFSET UNITYSDK_OFFSET(0x125CE310)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_FOV_OFFSET UNITYSDK_OFFSET(0x125CE390)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_NOISEDURATION_OFFSET UNITYSDK_OFFSET(0x125CE440)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_NOISE_OFFSET UNITYSDK_OFFSET(0x125CE3A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_OVERRIDECAMERANEARCLIP_OFFSET UNITYSDK_OFFSET(0x125CE490)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x125CDC50)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x125CDC60)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x125CE500)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowPostConfig_TypeDefinitionIndex = 44351;

	class MainCityChatShowPostConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 PostId; // 0x10
		::System::Boolean DisableCameraAndAnimation; // 0x14
		::System::String* Camera2; // 0x18
		::System::String* CameraStoryKey; // 0x20
		::System::Int32 PlayAnimationId; // 0x28
		::System::Single overrideCameraNearClip; // 0x2C
		::System::Single FadeOutTime; // 0x30
		::System::Boolean OpenNoise; // 0x34
		::System::String* NoisePath; // 0x38
		::System::Single noiseAmplitudeGain; // 0x40
		::System::Single noiseFrequencyGain; // 0x44
		::System::Single noiseDuration; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_81A3942BCC6E42B5 get_UICtrl()
		{
			return ((::Enum_3_81A3942BCC6E42B5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}

		::System::Int32 get_AnimationId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_ANIMATIONID_OFFSET))(this);
		}

		::System::String* get_Camera1Pos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERA1POS_OFFSET))(this);
		}

		::System::String* get_Camera2Pos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERA2POS_OFFSET))(this);
		}

		::System::String* get_FovAndBlend()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_FOVANDBLEND_OFFSET))(this);
		}

		::System::Single get_Fov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_FOV_OFFSET))(this);
		}

		::MoleMole::Config::ConfigCameraNoise* get_Noise()
		{
			return ((::MoleMole::Config::ConfigCameraNoise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_NOISE_OFFSET))(this);
		}

		::System::Single get_NoiseDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_NOISEDURATION_OFFSET))(this);
		}

		::System::Single get_OverrideCameraNearClip()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_OVERRIDECAMERANEARCLIP_OFFSET))(this);
		}

		::System::Int32 get_CameraRelaNpcId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERARELANPCID_OFFSET))(this);
		}

		::System::Boolean get_CameraRelaAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWPOSTCONFIG_GET_CAMERARELAAVATAR_OFFSET))(this);
		}
	};
}
