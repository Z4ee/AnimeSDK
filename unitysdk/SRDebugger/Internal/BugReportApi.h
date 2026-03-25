#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class BugReport; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_BUILDJSONREQUEST_OFFSET UNITYSDK_OFFSET(0x184318E0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_CREATECONSOLEDUMP_OFFSET UNITYSDK_OFFSET(0x18431A10)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x18431710)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x184316D0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x18431730)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_WASSUCCESSFUL_OFFSET UNITYSDK_OFFSET(0x184316F0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SETCOMPLETIONSTATE_OFFSET UNITYSDK_OFFSET(0x18431800)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x18431720)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x184316E0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_WASSUCCESSFUL_OFFSET UNITYSDK_OFFSET(0x18431700)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SUBMIT_OFFSET UNITYSDK_OFFSET(0x184317A0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x184316C0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int BugReportApi_TypeDefinitionIndex = 29744;

	class BugReportApi : public ::System::Object
	{
	public:
		::SRDebugger::Services::BugReport* _bugReport; // 0x10
		::System::String* _ErrorMessage_k__BackingField; // 0x18
		::UnityEngine::Networking::UnityWebRequest* _webRequest; // 0x20
		::System::String* _apiKey; // 0x28
		::System::Boolean _IsComplete_k__BackingField; // 0x30
		::System::Boolean _isBusy; // 0x31
		::System::Boolean _WasSuccessful_k__BackingField; // 0x32

		::System::Void _ctor(::SRDebugger::Services::BugReport* report, ::System::String* apiKey)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::BugReport*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__CTOR_OFFSET))(this, report, apiKey);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void set_IsComplete(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ISCOMPLETE_OFFSET))(this, value);
		}

		::System::Boolean get_WasSuccessful()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_WASSUCCESSFUL_OFFSET))(this);
		}

		::System::Void set_WasSuccessful(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_WASSUCCESSFUL_OFFSET))(this, value);
		}

		::System::String* get_ErrorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void set_ErrorMessage(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ERRORMESSAGE_OFFSET))(this, value);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_PROGRESS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Submit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SUBMIT_OFFSET))(this);
		}

		::System::Void SetCompletionState(::System::Boolean wasSuccessful)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SETCOMPLETIONSTATE_OFFSET))(this, wasSuccessful);
		}

		static ::System::String* BuildJsonRequest(::SRDebugger::Services::BugReport* report)
		{
			return ((::System::String*(*)(::SRDebugger::Services::BugReport*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_BUILDJSONREQUEST_OFFSET))(report);
		}

		static ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::String*>*>* CreateConsoleDump()
		{
			return ((::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_CREATECONSOLEDUMP_OFFSET))();
		}
	};
}
