#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineBlenderSettings; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Cameras { class NapActionVirtualStateDrivenCamera; }
namespace MoleMole::Cameras { class NapTimelineVirtualCamera; }
namespace MoleMole::Cameras { class NapVirtual3DActionCamera_1; }
namespace MoleMole::Cameras { class NapVirtualCutSceneCamera; }
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_MONOPIPELINEMOVECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xE954BB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int MonoPipelineMoveCamera_TypeDefinitionIndex = 86784;

	class MonoPipelineMoveCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineBrain* cinemachineBrain; // 0x18
		::UnityEngine::Camera* mainCamera; // 0x20
		::Cinemachine::CinemachineBlenderSettings* cinemachineBlenderSettings; // 0x28
		::UnityEngine::Transform* avatarRootTran; // 0x30
		::UnityEngine::Transform* followTran; // 0x38
		::UnityEngine::Transform* LookAtTran; // 0x40
		::UnityEngine::Transform* virtualCamsRoot; // 0x48
		::MoleMole::Cameras::NapActionVirtualStateDrivenCamera* napStateDriveCamera; // 0x50
		::MoleMole::Cameras::NapVirtual3DActionCamera_1* napActionCamera; // 0x58
		::MoleMole::Cameras::NapVirtualCutSceneCamera* cutsceneVirtualCamera; // 0x60
		::MoleMole::Cameras::NapVirtualPipelineCamera* ValuePipelineCamera; // 0x68
		::Cinemachine::CinemachineVirtualCamera* uiVirtualCamera; // 0x70
		::MoleMole::Cameras::NapTimelineVirtualCamera* TimelineVirtualCamera; // 0x78
		::UnityEngine::Transform* virtualShotCamsRoot; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOPIPELINEMOVECAMERA__CTOR_OFFSET))(this);
		}
	};
}
