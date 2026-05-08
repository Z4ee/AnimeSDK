#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataAdjustCircleWidgetController; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIDATAADJUSTCIRCLEWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAE390)
#define MOLEMOLE_UIDATAADJUSTCIRCLEWIDGETCONTROLLER___C__DISPLAYCLASS18_0__TRYCLOSE_B__1_OFFSET UNITYSDK_OFFSET(0x16CAE3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustCircleWidgetController___c__DisplayClass18_0_TypeDefinitionIndex = 43867;

	class UIDataAdjustCircleWidgetController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDataAdjustCircleWidgetController* __4__this; // 0x10
		::UnityEngine::Animation* adjustAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTCIRCLEWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryClose_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTCIRCLEWIDGETCONTROLLER___C__DISPLAYCLASS18_0__TRYCLOSE_B__1_OFFSET))(this);
		}
	};
}
