#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger::Services { class BugReportCompleteCallback; }
namespace SRDebugger::UI::Other { class BugReportPopoverRoot; }
namespace SRDebugger::UI::Other { class BugReportSheetController; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E679800)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_CANCELPRESSED_OFFSET UNITYSDK_OFFSET(0x1E679600)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_GET_ISSHOWINGPOPOVER_OFFSET UNITYSDK_OFFSET(0x1E678A00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_LOAD_OFFSET UNITYSDK_OFFSET(0x1E678BD0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E679480)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_OPENCO_OFFSET UNITYSDK_OFFSET(0x1E679400)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SCREENSHOTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E679720)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SHOWBUGREPORTER_OFFSET UNITYSDK_OFFSET(0x1E678A10)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SUBMITCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E679470)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_TAKINGSCREENSHOT_OFFSET UNITYSDK_OFFSET(0x1E679640)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6798C0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int BugReportPopoverService_TypeDefinitionIndex = 37380;

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

		::System::Void ShowBugReporter(::SRDebugger::Services::BugReportCompleteCallback* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::BugReportCompleteCallback*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SHOWBUGREPORTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* OpenCo(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_OPENCO_OFFSET))(this, a1, a2);
		}

		::System::Void SubmitComplete(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_SUBMITCOMPLETE_OFFSET))(this, a1, a2);
		}

		::System::Void CancelPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_CANCELPRESSED_OFFSET))(this);
		}

		::System::Void OnComplete(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTPOPOVERSERVICE_ONCOMPLETE_OFFSET))(this, a1, a2, a3);
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
