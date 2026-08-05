#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataAdjustGameWidgetController; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1958CB60)
#define MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__ONPOINTUPADJUST_B__0_OFFSET UNITYSDK_OFFSET(0x1958CB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataAdjustGameWidgetController___c__DisplayClass39_0_TypeDefinitionIndex = 49741;

	class UIDataAdjustGameWidgetController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDataAdjustGameWidgetController* __4__this; // 0x10
		::System::String* clip; // 0x18
		::UnityEngine::Animation* anim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPointUpAdjust_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAADJUSTGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__ONPOINTUPADJUST_B__0_OFFSET))(this);
		}
	};
}
