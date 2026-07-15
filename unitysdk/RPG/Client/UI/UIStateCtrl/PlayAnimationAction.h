#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/AsyncAction.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/PlayAnimationActionEndStrategy.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x16FE3390)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x16FE2EF0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16FE34F0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16FE3150)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x16FE3270)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE3540)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int PlayAnimationAction_TypeDefinitionIndex = 70655;

	class PlayAnimationAction : public ::RPG::Client::UI::UIStateCtrl::AsyncAction
	{
	public:
		::UnityEngine::Animation* TargetAnimation; // 0x28
		::UnityEngine::AnimationClip* AnimationClip; // 0x30
		::System::Boolean UseAnimLength; // 0x38
		::RPG::Client::UI::UIStateCtrl::PlayAnimationActionEndStrategy OnActionEnd; // 0x3C
		::System::Single _AnimLength; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_18982EFD3B740683_OFFSET))(this);
		}

		::System::Void Method_3_86D9A88811BF5A61(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_86D9A88811BF5A61_OFFSET))(this, a1);
		}

		::System::Void Method_3_0BF1620F1E4289BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_0BF1620F1E4289BD_OFFSET))(this, a1);
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
