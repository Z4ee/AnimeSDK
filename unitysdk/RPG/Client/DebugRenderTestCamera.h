#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class RenderTestCameraConfig; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define RPG_CLIENT_DEBUGRENDERTESTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xB736E40)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugRenderTestCamera_TypeDefinitionIndex = 63926;

	class DebugRenderTestCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::RenderTestCameraConfig* CamConfig; // 0x18
		::UnityEngine::Rendering::VolumeProfile* CameraVolumeProfile; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGRENDERTESTCAMERA__CTOR_OFFSET))(this);
		}
	};
}
