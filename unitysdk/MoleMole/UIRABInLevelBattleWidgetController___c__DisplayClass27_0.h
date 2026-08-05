#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABHudWidgetController; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16903FA0)
#define MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__UPDATEHUDRENDERORDER_B__0_OFFSET UNITYSDK_OFFSET(0x16903FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelBattleWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 83791;

	class UIRABInLevelBattleWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* camera; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateHUDRenderOrder_b__0(::MoleMole::UIRABHudWidgetController* a, ::MoleMole::UIRABHudWidgetController* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIRABHudWidgetController*, ::MoleMole::UIRABHudWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELBATTLEWIDGETCONTROLLER___C__DISPLAYCLASS27_0__UPDATEHUDRENDERORDER_B__0_OFFSET))(this, a, b);
		}
	};
}
