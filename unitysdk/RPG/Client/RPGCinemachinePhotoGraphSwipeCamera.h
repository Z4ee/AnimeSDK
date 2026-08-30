#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

class Class_1_854A2C7905ADF31B;
class Class_2_82D5CF3CD743E581;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::GameCore { class MazeDragCameraConfig; }

#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_DISABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x18033110)
#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_ENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x18033020)
#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x180332C0)
#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_OVERRIDESWIPECONFIG_OFFSET UNITYSDK_OFFSET(0x18033170)
#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x180333F0)
#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_START_OFFSET UNITYSDK_OFFSET(0x180331E0)
#define RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x180334C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachinePhotoGraphSwipeCamera_TypeDefinitionIndex = 69668;

	class RPGCinemachinePhotoGraphSwipeCamera : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Class_2_82D5CF3CD743E581* CINEAOLJBPJ; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void EnableUpdate(::Class_1_854A2C7905ADF31B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_854A2C7905ADF31B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_ENABLEUPDATE_OFFSET))(this, a1);
		}

		::System::Void DisableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_DISABLEUPDATE_OFFSET))(this);
		}

		::System::Void OverrideSwipeConfig(::RPG::GameCore::MazeDragCameraConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeDragCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_OVERRIDESWIPECONFIG_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_ONDESTROY_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEPHOTOGRAPHSWIPECAMERA_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
