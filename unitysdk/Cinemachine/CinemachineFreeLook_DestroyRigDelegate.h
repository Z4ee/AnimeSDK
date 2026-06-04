#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14647420)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14647450)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x146458C0)
#define CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x146473B0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFreeLook_DestroyRigDelegate_TypeDefinitionIndex = 36803;

	class CinemachineFreeLook_DestroyRigDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFREELOOK_DESTROYRIGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
