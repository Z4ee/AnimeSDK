#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETCHALLENGEFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x182AFF40)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETDATANUM_OFFSET UNITYSDK_OFFSET(0x182B02D0)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x182B0390)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x182B0520)
#define MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x182AED70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBattleInfoWidgetController_ChallengeRowWidgetItem_TypeDefinitionIndex = 88183;

	class UIInLevelPauseBattleInfoWidgetController_ChallengeRowWidgetItem : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _uncompleteIcon; // 0x10
		::UnityEngine::UI::Text* _titleText; // 0x18
		::UnityEngine::Transform* _dataNumArea; // 0x20
		::UnityEngine::UI::Text* _curNumText; // 0x28
		::UnityEngine::UI::Text* _totalNumText; // 0x30
		::UnityEngine::Transform* _root; // 0x38
		::UnityEngine::Transform* _completeIcon; // 0x40
		::UnityEngine::Transform* _loseIcon; // 0x48
		::UnityEngine::UI::Text* _finishText; // 0x50

		::System::Void _ctor(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM__CTOR_OFFSET))(this, root);
		}

		::System::Void SetChallengeFinishState(::MoleMole::UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETCHALLENGEFINISHSTATE_OFFSET))(this, state);
		}

		::System::Void SetDataNum(::System::Int32 curNum, ::System::Int32 totalNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETDATANUM_OFFSET))(this, curNum, totalNum);
		}

		::System::Void SetTitleText(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETTITLETEXT_OFFSET))(this, title);
		}

		::System::Void SetVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBATTLEINFOWIDGETCONTROLLER_CHALLENGEROWWIDGETITEM_SETVISIBLE_OFFSET))(this, visible);
		}
	};
}
