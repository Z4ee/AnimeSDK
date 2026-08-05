#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_BUILDASSITANTCAMERA_OFFSET UNITYSDK_OFFSET(0x167EC290)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_ISRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x167EC180)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_TARGETRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x167EC230)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x167EC1A0)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SET_ISRENDERTOTEXTURE_OFFSET UNITYSDK_OFFSET(0x167EC190)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_TICKCAMERALOOKATANDFOLLOW_OFFSET UNITYSDK_OFFSET(0x167EC3D0)
#define MOLEMOLE_CAMERAS_MONOASISTANTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x167EC410)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int MonoAsistantCamera_TypeDefinitionIndex = 77023;

	class MonoAsistantCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* asistantCamera; // 0x18
		::UnityEngine::RenderTexture* targetRT; // 0x20
		::System::Boolean Field_5_0; // 0x28
		::UnityEngine::Transform* followTran; // 0x30
		::UnityEngine::Transform* LookAtTran; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRenderToTexture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_ISRENDERTOTEXTURE_OFFSET))(this);
		}

		::System::Void set_IsRenderToTexture(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SET_ISRENDERTOTEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_SETSTATUS_OFFSET))(this, a1);
		}

		::UnityEngine::RenderTexture* get_targetRenderTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_GET_TARGETRENDERTEXTURE_OFFSET))(this);
		}

		::System::Void BuildAssitantCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_BUILDASSITANTCAMERA_OFFSET))(this);
		}

		::System::Void TickCameraLookAtAndFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_MONOASISTANTCAMERA_TICKCAMERALOOKATANDFOLLOW_OFFSET))(this);
		}
	};
}
