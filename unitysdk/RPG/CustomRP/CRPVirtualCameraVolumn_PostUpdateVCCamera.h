#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x178190C0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17819170)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x17818CF0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17819040)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraVolumn_PostUpdateVCCamera_TypeDefinitionIndex = 36149;

	class CRPVirtualCameraVolumn_PostUpdateVCCamera : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Int32 a2, ::UnityEngine::Rendering::CRPCameraInfo& a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::CRPVirtualCamera* a1, ::System::Int32 a2, ::UnityEngine::Rendering::CRPCameraInfo& a3, ::UnityEngine::Camera* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Int32, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::UnityEngine::Rendering::CRPCameraInfo& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPCameraInfo&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_POSTUPDATEVCCAMERA_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
