#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF32230)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF32260)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF31FA0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF31F80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_DelegateGetIMECompositionMode_TypeDefinitionIndex = 19660;

	class InputSystemDelegate_DelegateGetIMECompositionMode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::IMECompositionMode Invoke()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::UnityEngine::IMECompositionMode EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATEGETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
