#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABStageRewardPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1569F290)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__PLAYBLACKMASKANI_B__0_OFFSET UNITYSDK_OFFSET(0x1569F2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageRewardPopWindowController___c__DisplayClass34_0_TypeDefinitionIndex = 62180;

	class UIRABStageRewardPopWindowController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABStageRewardPopWindowController* __4__this; // 0x10
		::System::Action* onComplete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBlackMaskAni_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__PLAYBLACKMASKANI_B__0_OFFSET))(this);
		}
	};
}
