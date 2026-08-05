#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS116_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0DCD0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS116_0__SETENABLEEMPTYCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x15B0DCE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass116_0_TypeDefinitionIndex = 45171;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass116_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<::System::Int32>* onClickEmpty; // 0x10
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS116_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetEnableEmptyClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS116_0__SETENABLEEMPTYCLICK_B__0_OFFSET))(this);
		}
	};
}
