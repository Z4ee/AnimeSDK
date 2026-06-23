#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuitIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x122B93A0)
#define MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS37_0__SETENABLEEMPTYCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x122B93B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuitIconBtnWidgetController___c__DisplayClass37_0_TypeDefinitionIndex = 80847;

	class UISuitIconBtnWidgetController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuitIconBtnWidgetController* __4__this; // 0x10
		::UnityEngine::Events::UnityAction_1<::System::Int32>* onClickEmpty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetEnableEmptyClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUITICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS37_0__SETENABLEEMPTYCLICK_B__0_OFFSET))(this);
		}
	};
}
