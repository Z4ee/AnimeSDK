#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_710;
namespace MoleMole { class ConfigUIGachaPage; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183FE560)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHMULTIPLEREWARDITEMSPLAYANIM_B__0_OFFSET UNITYSDK_OFFSET(0x183FE570)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHMULTIPLEREWARDITEMSPLAYANIM_B__1_OFFSET UNITYSDK_OFFSET(0x183FE650)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c__DisplayClass24_0_TypeDefinitionIndex = 71743;

	class UIGachaRewardListDialogPopWindowController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action_2<::MoleMole::ConfigUIGachaPage*, ::System::Single>* onAllAnimPlayed; // 0x10
		::MoleMole::ConfigUIGachaPage* config; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Single>* rarityToAnimInterval; // 0x20
		::UnityEngine::AnimationCurve* curve; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_710*>* rewardControllers; // 0x30
		::System::Single extraDelay; // 0x38
		::System::Single firstItemAnimInterval; // 0x3C
		::System::Int32 idx; // 0x40
		::System::Single totalTime; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshMultipleRewardItemsPlayAnim_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHMULTIPLEREWARDITEMSPLAYANIM_B__0_OFFSET))(this);
		}

		::System::Void _RefreshMultipleRewardItemsPlayAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__REFRESHMULTIPLEREWARDITEMSPLAYANIM_B__1_OFFSET))(this);
		}
	};
}
