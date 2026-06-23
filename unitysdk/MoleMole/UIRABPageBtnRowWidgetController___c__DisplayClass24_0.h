#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152AA4D0)
#define MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS24_0__TRYSHOWCANSWEEPBUBBLE_B__0_OFFSET UNITYSDK_OFFSET(0x152AA4E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageBtnRowWidgetController___c__DisplayClass24_0_TypeDefinitionIndex = 48085;

	class UIRABPageBtnRowWidgetController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* bubbleTips; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryShowCanSweepBubble_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGEBTNROWWIDGETCONTROLLER___C__DISPLAYCLASS24_0__TRYSHOWCANSWEEPBUBBLE_B__0_OFFSET))(this);
		}
	};
}
