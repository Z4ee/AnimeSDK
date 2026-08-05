#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D4AAE60)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4AAED0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D4AAB60)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AAB40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_DelegateSetIMECompositionMode_TypeDefinitionIndex = 19661;

	class InputSystemDelegate_DelegateSetIMECompositionMode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::IMECompositionMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_INVOKE_OFFSET))(this, mode);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::IMECompositionMode mode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::IMECompositionMode, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET))(this, mode, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
