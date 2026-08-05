#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCollectRewardDialogPopWindowController; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3B020)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__PLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x1AE3B030)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__PLAYANIM_B__1_OFFSET UNITYSDK_OFFSET(0x1AE3B0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 85816;

	class UIHollowCollectRewardDialogPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Action* action; // 0x18
		::MoleMole::UIHollowCollectRewardDialogPopWindowController* __4__this; // 0x20
		::System::Single animTime; // 0x28
		::System::Single newRatio; // 0x2C
		::System::Single nowProgress; // 0x30
		::System::Single timeRatio; // 0x34
		::System::Single oldRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__PLAYANIM_B__0_OFFSET))(this);
		}

		::System::Void _PlayAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__PLAYANIM_B__1_OFFSET))(this);
		}
	};
}
