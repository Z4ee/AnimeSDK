#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AEAE7D0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AEAE840)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AEAE4D0)
#define MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAE760)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int InputSystemDelegate_DelegateSetIMECompositionMode_TypeDefinitionIndex = 7506;

	class InputSystemDelegate_DelegateSetIMECompositionMode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::IMECompositionMode a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::IMECompositionMode, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEMDELEGATE_DELEGATESETIMECOMPOSITIONMODE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
