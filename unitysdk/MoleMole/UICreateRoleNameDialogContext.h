#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICREATEROLENAMEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164848C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRoleNameDialogContext_TypeDefinitionIndex = 38559;

	class UICreateRoleNameDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* titleEnText; // 0x28
		::System::Action_1<::System::String*>* onClickOKTriggerLogic; // 0x30
		::System::Action_1<::System::String*>* onInputNameSuccess; // 0x38
		::System::String* defaultText; // 0x40
		::System::String* cancelButtonText; // 0x48
		::System::String* bottomTipsText; // 0x50
		::System::String* titleText; // 0x58
		::System::Action* onCancelInputName; // 0x60
		::System::Action* onClickCancelButton; // 0x68
		::System::String* tipsText; // 0x70
		::System::Action_1<::System::Action*>* onClickResetButton; // 0x78
		::System::String* inputTipsText; // 0x80
		::System::Boolean hideBottomTips; // 0x88
		::System::Boolean useOutsideConfirmLogic; // 0x89
		::System::Boolean hideClose; // 0x8A
		::System::Boolean hideHint; // 0x8B
		::System::Boolean enableBtnWhenInputEmpty; // 0x8C
		::System::Int32 maxByteLength; // 0x90

		::System::Void _ctor(::System::Action_1<::System::String*>* inputCB, ::System::Action* cancelCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGCONTEXT__CTOR_OFFSET))(this, inputCB, cancelCB);
		}
	};
}
