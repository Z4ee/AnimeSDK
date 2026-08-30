#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B97F050)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B97F080)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B97EEF0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97EFE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_DelegateGetIMECompositionMode_TypeDefinitionIndex = 7505;

	class InputSystemDelegate_DelegateGetIMECompositionMode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::IMECompositionMode Invoke()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::IMECompositionMode EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
