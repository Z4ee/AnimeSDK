#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_CANCEL_OFFSET UNITYSDK_OFFSET(0x18458C20)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_CLEARERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x184587D0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_CLEARFORM_OFFSET UNITYSDK_OFFSET(0x18458840)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_GETDEFAULTEMAILFIELDCONTENTS_OFFSET UNITYSDK_OFFSET(0x18458FC0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_GET_ISCANCELBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x184585D0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_ONBUGREPORTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18458C70)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_ONBUGREPORTPROGRESS_OFFSET UNITYSDK_OFFSET(0x18458C40)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SETDEFAULTEMAILFIELDCONTENTS_OFFSET UNITYSDK_OFFSET(0x18458B50)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SETFORMENABLED_OFFSET UNITYSDK_OFFSET(0x18458AE0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SETLOADINGSPINNERVISIBLE_OFFSET UNITYSDK_OFFSET(0x18458770)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SET_ISCANCELBUTTONENABLED_OFFSET UNITYSDK_OFFSET(0x18458610)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SHOWERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x18458E40)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x18458650)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SUBMITCO_OFFSET UNITYSDK_OFFSET(0x18458BD0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SUBMIT_OFFSET UNITYSDK_OFFSET(0x184588C0)
#define SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18459000)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int BugReportSheetController_TypeDefinitionIndex = 29643;

	class BugReportSheetController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::GameObject* ButtonContainer; // 0x48
		::UnityEngine::UI::Text* ButtonText; // 0x50
		::UnityEngine::UI::Button* CancelButton; // 0x58
		::System::Action* CancelPressed; // 0x60
		::UnityEngine::UI::InputField* DescriptionField; // 0x68
		::UnityEngine::UI::InputField* EmailField; // 0x70
		::UnityEngine::UI::Slider* ProgressBar; // 0x78
		::UnityEngine::UI::Text* ResultMessageText; // 0x80
		::System::Action* ScreenshotComplete; // 0x88
		::UnityEngine::UI::Button* SubmitButton; // 0x90
		::System::Action_2<::System::Boolean, ::System::String*>* SubmitComplete; // 0x98
		::System::Action* TakingScreenshot; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCancelButtonEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_GET_ISCANCELBUTTONENABLED_OFFSET))(this);
		}

		::System::Void set_IsCancelButtonEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SET_ISCANCELBUTTONENABLED_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SUBMIT_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_CANCEL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* SubmitCo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SUBMITCO_OFFSET))(this);
		}

		::System::Void OnBugReportProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_ONBUGREPORTPROGRESS_OFFSET))(this, progress);
		}

		::System::Void OnBugReportComplete(::System::Boolean didSucceed, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_ONBUGREPORTCOMPLETE_OFFSET))(this, didSucceed, errorMessage);
		}

		::System::Void SetLoadingSpinnerVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SETLOADINGSPINNERVISIBLE_OFFSET))(this, visible);
		}

		::System::Void ClearForm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_CLEARFORM_OFFSET))(this);
		}

		::System::Void ShowErrorMessage(::System::String* userMessage, ::System::String* serverMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SHOWERRORMESSAGE_OFFSET))(this, userMessage, serverMessage);
		}

		::System::Void ClearErrorMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_CLEARERRORMESSAGE_OFFSET))(this);
		}

		::System::Void SetFormEnabled(::System::Boolean e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SETFORMENABLED_OFFSET))(this, e);
		}

		::System::String* GetDefaultEmailFieldContents()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_GETDEFAULTEMAILFIELDCONTENTS_OFFSET))(this);
		}

		::System::Void SetDefaultEmailFieldContents(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_BUGREPORTSHEETCONTROLLER_SETDEFAULTEMAILFIELDCONTENTS_OFFSET))(this, value);
		}
	};
}
