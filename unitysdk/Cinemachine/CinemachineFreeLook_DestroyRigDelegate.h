#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x119BA8D0)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x119BA900)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x119B8080)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x119BA8B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_DestroyRigDelegate_TypeDefinitionIndex = 30783;

	class CinemachineFreeLook_DestroyRigDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* rig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_INVOKE_OFFSET))(this, rig);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* rig, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_BEGININVOKE_OFFSET))(this, rig, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
