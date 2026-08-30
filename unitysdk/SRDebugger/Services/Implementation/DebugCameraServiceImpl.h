#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGCAMERASERVICEIMPL_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1BDA3B30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGCAMERASERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA3910)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DebugCameraServiceImpl_TypeDefinitionIndex = 37382;

	class DebugCameraServiceImpl : public ::System::Object
	{
	public:
		::UnityEngine::Camera* _debugCamera; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGCAMERASERVICEIMPL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGCAMERASERVICEIMPL_GET_CAMERA_OFFSET))(this);
		}
	};
}
