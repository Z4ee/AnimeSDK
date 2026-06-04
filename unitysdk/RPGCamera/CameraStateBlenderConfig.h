#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_PoleType.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStateBlenderConfig_BlenderConfigParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_ADDCAMERASTATEBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0xA23EE50)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFGBYPARAM_OFFSET UNITYSDK_OFFSET(0xA23F000)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFG_OFFSET UNITYSDK_OFFSET(0xA23EDD0)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG_GETCAMERASTATEBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0xA23E910)
#define RPGCAMERA_CAMERASTATEBLENDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA23EE40)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlenderConfig_TypeDefinitionIndex = 41753;

	class CameraStateBlenderConfig : public ::System::Object
	{
	public:
		::RPGCamera::CameraStateBlenderConfig_PoleType poleType; // 0x10
		::System::Int32 toId; // 0x14
		::RPGCamera::CameraStateBlenderConfig_BlendType blendType; // 0x18
		::EasingFunction_Ease easeType; // 0x1C
		::System::Single duration; // 0x20
		::System::Int32 fromId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPGCamera::CameraStateBlenderConfig* CreateBlenderCfg(::System::Int32 a1, ::System::Int32 a2, ::RPGCamera::CameraStateBlenderConfig_BlendType a3, ::EasingFunction_Ease a4, ::System::Single a5)
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::System::Int32, ::System::Int32, ::RPGCamera::CameraStateBlenderConfig_BlendType, ::EasingFunction_Ease, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AddCameraStateBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* a1, ::RPGCamera::CameraStateBlenderConfig* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*, ::RPGCamera::CameraStateBlenderConfig*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_ADDCAMERASTATEBLENDERCONFIG_OFFSET))(a1, a2);
		}

		static ::RPGCamera::CameraStateBlenderConfig* GetCameraStateBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_GETCAMERASTATEBLENDERCONFIG_OFFSET))(a1, a2, a3);
		}

		static ::RPGCamera::CameraStateBlenderConfig* CreateBlenderCfgByParam(::RPGCamera::CameraStateBlenderConfig_BlenderConfigParam* a1)
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::RPGCamera::CameraStateBlenderConfig_BlenderConfigParam*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDERCONFIG_CREATEBLENDERCFGBYPARAM_OFFSET))(a1);
		}
	};
}
