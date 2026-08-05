#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBPCoreRewardShowWidgetWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196FA170)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SETCLICKACTION_B__0_OFFSET UNITYSDK_OFFSET(0x196FA180)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardShowWidgetWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 86976;

	class UIBPCoreRewardShowWidgetWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>* clickAction; // 0x10
		::MoleMole::UIBPCoreRewardShowWidgetWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetClickAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS6_0__SETCLICKACTION_B__0_OFFSET))(this);
		}
	};
}
