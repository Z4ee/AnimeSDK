#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/AsyncAction.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/PlayAnimationActionEndStrategy.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x1B11F0F0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1B11F490)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B11EE10)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_41A074549EF25F63_1_OFFSET UNITYSDK_OFFSET(0x1B11F360)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1B11F250)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x1B11EB50)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x1B11F040)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x1B11EE50)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11F4E0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int PlayAnimationAction_TypeDefinitionIndex = 73954;

	class PlayAnimationAction : public ::RPG::Client::UI::UIStateCtrl::AsyncAction
	{
	public:
		::UnityEngine::Animation* TargetAnimation; // 0x28
		::UnityEngine::AnimationClip* AnimationClip; // 0x30
		::System::Boolean UseAnimLength; // 0x38
		::RPG::Client::UI::UIStateCtrl::PlayAnimationActionEndStrategy OnActionEnd; // 0x3C
		::System::Single _AnimLength; // 0x40
		::System::Single _originalAnimSpeed; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_5A124CAF1E48B74F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
		}

		::System::Void Method_3_F4F1E7D1CC26024A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_F4F1E7D1CC26024A_OFFSET))(this, a1);
		}

		::System::Void Method_3_0BF1620F1E4289BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_0BF1620F1E4289BD_OFFSET))(this, a1);
		}

		::System::Void Method_3_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_3_41A074549EF25F63_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_41A074549EF25F63_1_OFFSET))(this);
		}

		::System::Void Method_3_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
