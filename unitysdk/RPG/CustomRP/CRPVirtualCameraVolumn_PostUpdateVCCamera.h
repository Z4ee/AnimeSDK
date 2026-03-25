#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A7A350)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A7A400)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A799F0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7A330)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraVolumn_PostUpdateVCCamera_TypeDefinitionIndex = 29315;

	class CRPVirtualCameraVolumn_PostUpdateVCCamera : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Rendering::CRPVirtualCamera* vc, ::System::Int32 index, ::UnityEngine::Rendering::CRPCameraInfo& cameraData, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_INVOKE_OFFSET))(this, vc, index, cameraData, camera);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::CRPVirtualCamera* vc, ::System::Int32 index, ::UnityEngine::Rendering::CRPCameraInfo& cameraData, ::UnityEngine::Camera* camera, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_BEGININVOKE_OFFSET))(this, vc, index, cameraData, camera, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::CRPCameraInfo& cameraData, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPCameraInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_ENDINVOKE_OFFSET))(this, cameraData, result);
		}
	};
}
