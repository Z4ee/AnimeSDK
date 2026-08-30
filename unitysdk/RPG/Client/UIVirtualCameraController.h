#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xE3C9DC0)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_DEACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xE3CA660)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CA8A0)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__SETUPBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0xE3CA540)

namespace RPG::Client
{
	inline static constexpr unsigned int UIVirtualCameraController_TypeDefinitionIndex = 69083;

	class UIVirtualCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single VIRTUAL_CAMERA_NEAR_CLIP; // 0x0
		// static const ::System::Single VIRTUAL_CAMERA_FAR_CLIP; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ActiveVirtualCamera(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::Boolean a4, ::System::Nullable_1<::UnityEngine::Vector2> a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_ACTIVEVIRTUALCAMERA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DeActiveVirtualCamera(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER_DEACTIVEVIRTUALCAMERA_OFFSET))(this, a1);
		}

		::System::Void _SetupBlendConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER__SETUPBLENDCONFIG_OFFSET))(this);
		}
	};
}
