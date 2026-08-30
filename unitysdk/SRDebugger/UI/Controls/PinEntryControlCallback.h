#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E693190)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E6931F0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E692F70)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6930A0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int PinEntryControlCallback_TypeDefinitionIndex = 37334;

	class PinEntryControlCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROLCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
