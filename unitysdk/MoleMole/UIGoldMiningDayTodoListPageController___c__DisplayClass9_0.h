#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGoldMiningDayTodoListPageController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1696BE60)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS9_0__ONSHOW_B__1_OFFSET UNITYSDK_OFFSET(0x1696BE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTodoListPageController___c__DisplayClass9_0_TypeDefinitionIndex = 73200;

	class UIGoldMiningDayTodoListPageController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGoldMiningDayTodoListPageController* __4__this; // 0x10
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__DISPLAYCLASS9_0__ONSHOW_B__1_OFFSET))(this);
		}
	};
}
