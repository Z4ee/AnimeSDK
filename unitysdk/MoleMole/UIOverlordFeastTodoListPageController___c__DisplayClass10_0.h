#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastTodoListPageController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169530D0)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x169544B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListPageController___c__DisplayClass10_0_TypeDefinitionIndex = 65080;

	class UIOverlordFeastTodoListPageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastTodoListPageController* __4__this; // 0x10
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTPAGECONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
