#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Cinemachine { class CinemachineComponentBase; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E2B0270)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E2B02B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E2AFC50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AFC30)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_CreatePipelineDelegate_TypeDefinitionIndex = 34054;

	class CinemachineVirtualCamera_CreatePipelineDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Transform* Invoke(::Cinemachine::CinemachineVirtualCamera* vcam, ::System::String* name, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* copyFrom)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_INVOKE_OFFSET))(this, vcam, name, copyFrom);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineVirtualCamera* vcam, ::System::String* name, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* copyFrom, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_BEGININVOKE_OFFSET))(this, vcam, name, copyFrom, callback, object);
		}

		::UnityEngine::Transform* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
