#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::Services { class BugReport; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_BUILDJSONREQUEST_OFFSET UNITYSDK_OFFSET(0x1BD98DC0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_CREATECONSOLEDUMP_OFFSET UNITYSDK_OFFSET(0x1BD99120)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BD98BF0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BD98BB0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1BD98C10)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_WASSUCCESSFUL_OFFSET UNITYSDK_OFFSET(0x1BD98BD0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SETCOMPLETIONSTATE_OFFSET UNITYSDK_OFFSET(0x1BD98CE0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BD98C00)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1BD98BC0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_WASSUCCESSFUL_OFFSET UNITYSDK_OFFSET(0x1BD98BE0)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1BD98C80)
#define SRDEBUGGER_INTERNAL_BUGREPORTAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD98BA0)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int BugReportApi_TypeDefinitionIndex = 37405;

	class BugReportApi : public ::System::Object
	{
	public:
		::System::String* _apiKey; // 0x10
		::SRDebugger::Services::BugReport* _bugReport; // 0x18
		::System::String* _ErrorMessage_k__BackingField; // 0x20
		::UnityEngine::Networking::UnityWebRequest* _webRequest; // 0x28
		::System::Boolean _IsComplete_k__BackingField; // 0x30
		::System::Boolean _isBusy; // 0x31
		::System::Boolean _WasSuccessful_k__BackingField; // 0x32

		::System::Void _ctor(::SRDebugger::Services::BugReport* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::BugReport*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void set_IsComplete(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ISCOMPLETE_OFFSET))(this, a1);
		}

		::System::Boolean get_WasSuccessful()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_WASSUCCESSFUL_OFFSET))(this);
		}

		::System::Void set_WasSuccessful(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_WASSUCCESSFUL_OFFSET))(this, a1);
		}

		::System::String* get_ErrorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void set_ErrorMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SET_ERRORMESSAGE_OFFSET))(this, a1);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_GET_PROGRESS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Submit()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SUBMIT_OFFSET))(this);
		}

		::System::Void SetCompletionState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_SETCOMPLETIONSTATE_OFFSET))(this, a1);
		}

		static ::System::String* BuildJsonRequest(::SRDebugger::Services::BugReport* a1)
		{
			return ((::System::String*(*)(::SRDebugger::Services::BugReport*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_BUILDJSONREQUEST_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::String*>*>* CreateConsoleDump()
		{
			return ((::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_BUGREPORTAPI_CREATECONSOLEDUMP_OFFSET))();
		}
	};
}
