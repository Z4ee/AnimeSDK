#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1569E980)
#define MOLEMOLE_UIRABPAGECONTROLLER___C__DISPLAYCLASS24_0__PLAYBLACKMASKANI_B__0_OFFSET UNITYSDK_OFFSET(0x1569E990)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABPageController___c__DisplayClass24_0_TypeDefinitionIndex = 65004;

	class UIRABPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABPageController* __4__this; // 0x10
		::System::Action* onComplete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBlackMaskAni_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABPAGECONTROLLER___C__DISPLAYCLASS24_0__PLAYBLACKMASKANI_B__0_OFFSET))(this);
		}
	};
}
