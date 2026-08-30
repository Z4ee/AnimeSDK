#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B97F120)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B97F190)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B97EE50)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97F0B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_DelegateGetKeyEvent_TypeDefinitionIndex = 7504;

	class InputSystemDelegate_DelegateGetKeyEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::KeyCode a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::KeyCode, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETKEYEVENT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
