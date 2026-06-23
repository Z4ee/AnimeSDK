#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattleMonsterHudWidgetController; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17411C00)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__UPDATEHUDRENDERORDER_B__0_OFFSET UNITYSDK_OFFSET(0x17411C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 46036;

	class UIABBattlePhaseWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* camera; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateHUDRenderOrder_b__0(::MoleMole::UIAutoBattleMonsterHudWidgetController* a, ::MoleMole::UIAutoBattleMonsterHudWidgetController* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIAutoBattleMonsterHudWidgetController*, ::MoleMole::UIAutoBattleMonsterHudWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__UPDATEHUDRENDERORDER_B__0_OFFSET))(this, a, b);
		}
	};
}
