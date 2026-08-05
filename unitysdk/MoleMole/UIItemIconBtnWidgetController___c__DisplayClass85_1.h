#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_1__CTOR_OFFSET UNITYSDK_OFFSET(0x189EC760)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_1__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x189EC770)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass85_1_TypeDefinitionIndex = 53258;

	class UIItemIconBtnWidgetController___c__DisplayClass85_1 : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x10
		::UnityEngine::Events::UnityAction_1<::System::Int32>* cb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_1__ONSCROLLITEMUPDATE_B__1_OFFSET))(this);
		}
	};
}
