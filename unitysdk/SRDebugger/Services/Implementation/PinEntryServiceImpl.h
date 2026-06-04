#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger::Services { class IPinEntryService; }
namespace SRDebugger::Services { class PinEntryCompleteCallback; }
namespace SRDebugger::UI::Controls { class PinEntryControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACF2370)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_GET_ISSHOWINGKEYPAD_OFFSET UNITYSDK_OFFSET(0x1ACF1840)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x1ACF1DF0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_PINCONTROLONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1ACF2500)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_1_OFFSET UNITYSDK_OFFSET(0x1ACF2350)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_OFFSET UNITYSDK_OFFSET(0x1ACF1850)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_VERIFYPIN_OFFSET UNITYSDK_OFFSET(0x1ACF1AC0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF2670)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int PinEntryServiceImpl_TypeDefinitionIndex = 35750;

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

		::System::Void ShowPinEntry(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::String* a2, ::SRDebugger::Services::PinEntryCompleteCallback* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*, ::SRDebugger::Services::PinEntryCompleteCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ShowPinEntry_1(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::String* a2, ::SRDebugger::Services::PinEntryCompleteCallback* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*, ::SRDebugger::Services::PinEntryCompleteCallback*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_SHOWPINENTRY_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_AWAKE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_LOAD_OFFSET))(this);
		}

		::System::Void PinControlOnComplete(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_PINCONTROLONCOMPLETE_OFFSET))(this, a1, a2);
		}

		::System::Void VerifyPin(::System::Collections::Generic::IList_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_PINENTRYSERVICEIMPL_VERIFYPIN_OFFSET))(this, a1);
		}
	};
}
