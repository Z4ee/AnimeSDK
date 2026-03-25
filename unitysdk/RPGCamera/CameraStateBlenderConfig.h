#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_PoleType.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStateBlenderConfig_BlenderConfigParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_ADDCAMERASTATEBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0x85BC2A0)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFGBYPARAM_OFFSET UNITYSDK_OFFSET(0x85BC480)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFG_OFFSET UNITYSDK_OFFSET(0x85BC220)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_GETCAMERASTATEBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0x85BBCE0)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x85BC290)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlenderConfig_TypeDefinitionIndex = 35107;

	class CameraStateBlenderConfig : public ::System::Object
	{
	public:
		::RPGCamera::CameraStateBlenderConfig_BlendType blendType; // 0x10
		::System::Single duration; // 0x14
		::System::Int32 fromId; // 0x18
		::System::Int32 toId; // 0x1C
		::RPGCamera::CameraStateBlenderConfig_PoleType poleType; // 0x20
		::EasingFunction_Ease easeType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPGCamera::CameraStateBlenderConfig* CreateBlenderCfg(::System::Int32 fromId, ::System::Int32 toId, ::RPGCamera::CameraStateBlenderConfig_BlendType blendType, ::EasingFunction_Ease easeType, ::System::Single duration)
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::System::Int32, ::System::Int32, ::RPGCamera::CameraStateBlenderConfig_BlendType, ::EasingFunction_Ease, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFG_OFFSET))(fromId, toId, blendType, easeType, duration);
		}

		static ::System::Void AddCameraStateBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* dic, ::RPGCamera::CameraStateBlenderConfig* cfg)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*, ::RPGCamera::CameraStateBlenderConfig*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_ADDCAMERASTATEBLENDERCONFIG_OFFSET))(dic, cfg);
		}

		static ::RPGCamera::CameraStateBlenderConfig* GetCameraStateBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* dic, ::System::Int32 fromId, ::System::Int32 toId)
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_GETCAMERASTATEBLENDERCONFIG_OFFSET))(dic, fromId, toId);
		}

		static ::RPGCamera::CameraStateBlenderConfig* CreateBlenderCfgByParam(::RPGCamera::CameraStateBlenderConfig_BlenderConfigParam* param)
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::RPGCamera::CameraStateBlenderConfig_BlenderConfigParam*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFGBYPARAM_OFFSET))(param);
		}
	};
}
