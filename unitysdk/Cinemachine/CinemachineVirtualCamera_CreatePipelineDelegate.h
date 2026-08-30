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

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16482B80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16482BC0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16481EA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16482A90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_CreatePipelineDelegate_TypeDefinitionIndex = 38469;

	class CinemachineVirtualCamera_CreatePipelineDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* Invoke(::Cinemachine::CinemachineVirtualCamera* a1, ::System::String* a2, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineVirtualCamera* a1, ::System::String* a2, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::Cinemachine::CinemachineComponentBase*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Transform* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_CREATEPIPELINEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
