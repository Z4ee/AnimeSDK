#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICREATEROLENAMEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7C300)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRoleNameDialogContext_TypeDefinitionIndex = 40978;

	class UICreateRoleNameDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Action*>* onClickResetButton; // 0x28
		::System::String* inputTipsText; // 0x30
		::System::Action* onCancelInputName; // 0x38
		::System::String* tipsText; // 0x40
		::System::String* titleEnText; // 0x48
		::System::String* defaultText; // 0x50
		::System::String* bottomTipsText; // 0x58
		::System::Action_1<::System::String*>* onClickOKTriggerLogic; // 0x60
		::System::String* cancelButtonText; // 0x68
		::System::Action_1<::System::String*>* onInputNameSuccess; // 0x70
		::System::Action* onClickCancelButton; // 0x78
		::System::String* titleText; // 0x80
		::System::Int32 maxByteLength; // 0x88
		::System::Boolean useOutsideConfirmLogic; // 0x8C
		::System::Boolean hideBottomTips; // 0x8D
		::System::Boolean enableBtnWhenInputEmpty; // 0x8E
		::System::Boolean hideHint; // 0x8F
		::System::Boolean hideClose; // 0x90

		::System::Void _ctor(::System::Action_1<::System::String*>* inputCB, ::System::Action* cancelCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGCONTEXT__CTOR_OFFSET))(this, inputCB, cancelCB);
		}
	};
}
