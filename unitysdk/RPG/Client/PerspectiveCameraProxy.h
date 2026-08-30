#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_PERSPECTIVECAMERAPROXY_GET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1865DB90)
#define RPG_CLIENT_PERSPECTIVECAMERAPROXY_START_OFFSET UNITYSDK_OFFSET(0x1865DBD0)
#define RPG_CLIENT_PERSPECTIVECAMERAPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1865DCC0)
#define RPG_CLIENT_PERSPECTIVECAMERAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1865DFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerspectiveCameraProxy_TypeDefinitionIndex = 72548;

	class PerspectiveCameraProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* TargetPage; // 0x18
		::System::Single FOV; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* HJBIJPKAJNG; // 0x28
		::UnityEngine::Camera* IBGEABMCPEK; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSPECTIVECAMERAPROXY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_TargetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSPECTIVECAMERAPROXY_GET_TARGETCAMERA_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSPECTIVECAMERAPROXY_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERSPECTIVECAMERAPROXY_UPDATE_OFFSET))(this);
		}
	};
}
