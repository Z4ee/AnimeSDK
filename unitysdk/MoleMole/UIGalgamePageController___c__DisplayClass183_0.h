#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS183_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172ECEC0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS183_0__HIDESWITCHSCENEGROUPPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x172ECED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass183_0_TypeDefinitionIndex = 62793;

	class UIGalgamePageController___c__DisplayClass183_0 : public ::System::Object
	{
	public:
		::System::String* fadeOutAnimStr; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::System::Boolean continuePlayGroupNode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS183_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideSwitchSceneGroupPlay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS183_0__HIDESWITCHSCENEGROUPPLAY_B__0_OFFSET))(this);
		}
	};
}
