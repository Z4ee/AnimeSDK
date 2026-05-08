#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRamenStoreWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x154E6530)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS13_0__STARTSHOWGETRAMENCUTSCENE_B__0_OFFSET UNITYSDK_OFFSET(0x154E6540)
#define MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS13_0__STARTSHOWGETRAMENCUTSCENE_B__1_OFFSET UNITYSDK_OFFSET(0x154E6570)

namespace MoleMole
{
	inline static constexpr unsigned int UIRamenStoreWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 46373;

	class UIRamenStoreWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRamenStoreWidgetController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartShowGetRamenCutScene_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS13_0__STARTSHOWGETRAMENCUTSCENE_B__0_OFFSET))(this);
		}

		::System::Void _StartShowGetRamenCutScene_b__1(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRAMENSTOREWIDGETCONTROLLER___C__DISPLAYCLASS13_0__STARTSHOWGETRAMENCUTSCENE_B__1_OFFSET))(this, trans);
		}
	};
}
