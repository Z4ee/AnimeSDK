#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A071AC0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A071B30)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0717B0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0717A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_DelegateGetKeyEvent_TypeDefinitionIndex = 18431;

	class InputSystemDelegate_DelegateGetKeyEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::UnityEngine::KeyCode nKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_INVOKE_OFFSET))(this, nKey);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::KeyCode nKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::KeyCode, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_BEGININVOKE_OFFSET))(this, nKey, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
