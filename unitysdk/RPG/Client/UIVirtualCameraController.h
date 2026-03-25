#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA73FAC0)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_DEACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xA740260)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA740500)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__SETUPBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0xA740140)

namespace RPG::Client
{
	inline static constexpr unsigned int UIVirtualCameraController_TypeDefinitionIndex = 56478;

	class UIVirtualCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single VIRTUAL_CAMERA_NEAR_CLIP; // 0x0
		// static const ::System::Single VIRTUAL_CAMERA_FAR_CLIP; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ActiveVirtualCamera(::UnityEngine::Transform* transRoot, ::UnityEngine::GameObject* followTarget, ::UnityEngine::GameObject* lookAtTarget, ::System::Boolean cut, ::System::Nullable_1<::UnityEngine::Vector2> vCenterPos, ::System::Boolean lookAtLocalPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_ACTIVEVIRTUALCAMERA_OFFSET))(this, transRoot, followTarget, lookAtTarget, cut, vCenterPos, lookAtLocalPlayer);
		}

		::System::Void DeActiveVirtualCamera(::UnityEngine::Transform* transRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_DEACTIVEVIRTUALCAMERA_OFFSET))(this, transRoot);
		}

		::System::Void _SetupBlendConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__SETUPBLENDCONFIG_OFFSET))(this);
		}
	};
}
