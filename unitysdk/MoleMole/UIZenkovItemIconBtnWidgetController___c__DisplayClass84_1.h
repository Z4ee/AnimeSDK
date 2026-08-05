#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_1__CTOR_OFFSET UNITYSDK_OFFSET(0x162EEAF0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_1__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x162EEB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass84_1_TypeDefinitionIndex = 45172;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass84_1 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<::System::Int32>* cb; // 0x10
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_1__ONSCROLLITEMUPDATE_B__1_OFFSET))(this);
		}
	};
}
