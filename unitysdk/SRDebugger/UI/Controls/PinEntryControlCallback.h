#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E8DC30)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E8DC90)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E8D520)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7C120)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int PinEntryControlCallback_TypeDefinitionIndex = 35393;

	class PinEntryControlCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Collections::Generic::IList_1<::System::Int32>* result, ::System::Boolean didCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_INVOKE_OFFSET))(this, result, didCancel);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IList_1<::System::Int32>* result, ::System::Boolean didCancel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_BEGININVOKE_OFFSET))(this, result, didCancel, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
