#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBPLevelRowWidgetController; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ANIMATEEXPNUMBER_B__0_OFFSET UNITYSDK_OFFSET(0x196FA1E0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ANIMATEEXPNUMBER_B__1_OFFSET UNITYSDK_OFFSET(0x196FA380)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196FA1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPLevelRowWidgetController___c__DisplayClass32_0_TypeDefinitionIndex = 79588;

	class UIBPLevelRowWidgetController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* firstCurve; // 0x10
		::MoleMole::UIBPLevelRowWidgetController* __4__this; // 0x18
		::UnityEngine::AnimationCurve* secondCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _AnimateExpNumber_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ANIMATEEXPNUMBER_B__0_OFFSET))(this);
		}

		::System::Void _AnimateExpNumber_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS32_0__ANIMATEEXPNUMBER_B__1_OFFSET))(this);
		}
	};
}
