#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger::Services { class BugReportCompleteCallback; }
namespace SRDebugger::UI::Other { class BugReportPopoverRoot; }
namespace SRDebugger::UI::Other { class BugReportSheetController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E75C40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_CANCELPRESSED_OFFSET UNITYSDK_OFFSET(0x19E75A40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_GET_ISSHOWINGPOPOVER_OFFSET UNITYSDK_OFFSET(0x19E75040)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_LOAD_OFFSET UNITYSDK_OFFSET(0x19E75200)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E758D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_OPENCO_OFFSET UNITYSDK_OFFSET(0x19E75850)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SCREENSHOTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E75B60)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SHOWBUGREPORTER_OFFSET UNITYSDK_OFFSET(0x19E75050)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SUBMITCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19E758C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_TAKINGSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x19E75A80)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E75D00)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int BugReportPopoverService_TypeDefinitionIndex = 35439;

	class BugReportPopoverService : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::Implementation::BugReportPopoverService*>
	{
	public:
		::SRDebugger::Services::BugReportCompleteCallback* _callback; // 0x48
		::System::Boolean _isVisible; // 0x50
		::SRDebugger::UI::Other::BugReportPopoverRoot* _popover; // 0x58
		::SRDebugger::UI::Other::BugReportSheetController* _sheet; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowingPopover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_GET_ISSHOWINGPOPOVER_OFFSET))(this);
		}

		::System::Void ShowBugReporter(::SRDebugger::Services::BugReportCompleteCallback* callback, ::System::Boolean takeScreenshotFirst, ::System::String* descriptionText)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::BugReportCompleteCallback*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SHOWBUGREPORTER_OFFSET))(this, callback, takeScreenshotFirst, descriptionText);
		}

		::System::Collections::IEnumerator* OpenCo(::System::Boolean takeScreenshot, ::System::String* descriptionText)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_OPENCO_OFFSET))(this, takeScreenshot, descriptionText);
		}

		::System::Void SubmitComplete(::System::Boolean didSucceed, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SUBMITCOMPLETE_OFFSET))(this, didSucceed, errorMessage);
		}

		::System::Void CancelPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_CANCELPRESSED_OFFSET))(this);
		}

		::System::Void OnComplete(::System::Boolean success, ::System::String* errorMessage, ::System::Boolean close)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_ONCOMPLETE_OFFSET))(this, success, errorMessage, close);
		}

		::System::Void TakingScreenshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_TAKINGSCREENSHOT_OFFSET))(this);
		}

		::System::Void ScreenshotComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SCREENSHOTCOMPLETE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_AWAKE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_LOAD_OFFSET))(this);
		}
	};
}
