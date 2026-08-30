#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace SRDebugger::Internal { class BugReportApi; }
namespace SRDebugger::Services { class BugReport; }
namespace SRDebugger::Services { class BugReportCompleteCallback; }
namespace SRDebugger::Services { class BugReportProgressCallback; }
namespace SRDebugger::Services { class IBugReportService; }
namespace System { class String; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E678690)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E678770)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_ONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E678750)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_SENDBUGREPORT_OFFSET UNITYSDK_OFFSET(0x1E6784E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6787E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6789E0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int BugReportApiService_TypeDefinitionIndex = 37379;

	class BugReportApiService : public ::SRF::Service::SRServiceBase_1<::SRDebugger::Services::IBugReportService*>
	{
	public:
		// static const ::System::Single Timeout; // 0x0
		::SRDebugger::Services::BugReportCompleteCallback* _completeCallback; // 0x48
		::System::String* _errorMessage; // 0x50
		::System::Boolean _isBusy; // 0x58
		::System::Single _previousProgress; // 0x5C
		::SRDebugger::Services::BugReportProgressCallback* _progressCallback; // 0x60
		::SRDebugger::Internal::BugReportApi* _reportApi; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE__CTOR_OFFSET))(this);
		}

		::System::Void SendBugReport(::SRDebugger::Services::BugReport* a1, ::SRDebugger::Services::BugReportCompleteCallback* a2, ::SRDebugger::Services::BugReportProgressCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::BugReport*, ::SRDebugger::Services::BugReportCompleteCallback*, ::SRDebugger::Services::BugReportProgressCallback*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_SENDBUGREPORT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_AWAKE_OFFSET))(this);
		}

		::System::Void OnProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_ONPROGRESS_OFFSET))(this, a1);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_BUGREPORTAPISERVICE_UPDATE_OFFSET))(this);
		}
	};
}
