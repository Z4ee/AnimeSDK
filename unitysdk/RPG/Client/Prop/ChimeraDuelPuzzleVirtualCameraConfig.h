#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_GET_BLENDSOURCE_OFFSET UNITYSDK_OFFSET(0x18FEBA60)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_GET_BLENDTARGET_OFFSET UNITYSDK_OFFSET(0x18FEBA40)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_METHOD_1_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x18FEBA80)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEC030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelPuzzleVirtualCameraConfig_TypeDefinitionIndex = 74356;

	class ChimeraDuelPuzzleVirtualCameraConfig : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet* _BlendTarget; // 0x10
		::Cinemachine::CinemachineBlendDefinition_Style BlendType; // 0x18
		::RPG::Client::CameraBlendCurve* CustomBlendCurve; // 0x20
		::System::Single BlendTime; // 0x28
		::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet* _BlendSource; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG__CTOR_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get_BlendTarget()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_GET_BLENDTARGET_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get_BlendSource()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_GET_BLENDSOURCE_OFFSET))(this);
		}

		::System::Void Method_1_D9EF75A2D048B8A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_METHOD_1_D9EF75A2D048B8A1_OFFSET))(this);
		}
	};
}
