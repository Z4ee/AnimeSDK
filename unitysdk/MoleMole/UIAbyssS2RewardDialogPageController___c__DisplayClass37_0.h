#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2RewardDialogPageController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17317900)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS37_0__PLAYANIMCURVE_B__0_OFFSET UNITYSDK_OFFSET(0x17317910)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardDialogPageController___c__DisplayClass37_0_TypeDefinitionIndex = 66545;

	class UIAbyssS2RewardDialogPageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2RewardDialogPageController* __4__this; // 0x10
		::System::Action_1<::System::Single>* action; // 0x18
		::UnityEngine::AnimationCurve* curve; // 0x20
		::System::Single end; // 0x28
		::System::Single start; // 0x2C
		::System::Single animTime; // 0x30
		::System::Single index; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimCurve_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS37_0__PLAYANIMCURVE_B__0_OFFSET))(this);
		}
	};
}
