#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger::Services { class IPinEntryService; }
namespace SRDebugger::Services { class PinEntryCompleteCallback; }
namespace SRDebugger::UI::Controls { class PinEntryControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E7C010)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_GET_ISSHOWINGKEYPAD_OFFSET UNITYSDK_OFFSET(0x19E7B1F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x19E7B7F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_PINCONTROLONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E7C1C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_1_OFFSET UNITYSDK_OFFSET(0x19E7BFF0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_OFFSET UNITYSDK_OFFSET(0x19E7B200)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_VERIFYPIN_OFFSET UNITYSDK_OFFSET(0x19E7B4C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E7C330)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int PinEntryServiceImpl_TypeDefinitionIndex = 35450;

	class PinEntryServiceImpl : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::IPinEntryService*>
	{
	public:
		::SRDebugger::Services::PinEntryCompleteCallback* _callback; // 0x48
		::System::Boolean _isVisible; // 0x50
		::SRDebugger::UI::Controls::PinEntryControl* _pinControl; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* _requiredPin; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowingKeypad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_GET_ISSHOWINGKEYPAD_OFFSET))(this);
		}

		::System::Void ShowPinEntry(::System::Collections::Generic::IList_1<::System::Int32>* requiredPin, ::System::String* message, ::SRDebugger::Services::PinEntryCompleteCallback* callback, ::System::Boolean allowCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*, ::SRDebugger::Services::PinEntryCompleteCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_OFFSET))(this, requiredPin, message, callback, allowCancel);
		}

		::System::Void ShowPinEntry_1(::System::Collections::Generic::IList_1<::System::Int32>* requiredPin, ::System::String* message, ::SRDebugger::Services::PinEntryCompleteCallback* callback, ::System::Boolean blockInput, ::System::Boolean allowCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*, ::SRDebugger::Services::PinEntryCompleteCallback*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_1_OFFSET))(this, requiredPin, message, callback, blockInput, allowCancel);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_AWAKE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_LOAD_OFFSET))(this);
		}

		::System::Void PinControlOnComplete(::System::Collections::Generic::IList_1<::System::Int32>* result, ::System::Boolean didCancel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_PINCONTROLONCOMPLETE_OFFSET))(this, result, didCancel);
		}

		::System::Void VerifyPin(::System::Collections::Generic::IList_1<::System::Int32>* pin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_VERIFYPIN_OFFSET))(this, pin);
		}
	};
}
