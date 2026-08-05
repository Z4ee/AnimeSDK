#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABStageRewardPopWindowController; }

#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3DAE0)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS32_0__ONSTAGEREWARDBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x17D3DAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageRewardPopWindowController___c__DisplayClass32_0_TypeDefinitionIndex = 77885;

	class UIRABStageRewardPopWindowController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABStageRewardPopWindowController* __4__this; // 0x10
		::System::Int32 fromStageId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnStageRewardBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS32_0__ONSTAGEREWARDBTNCLICK_B__0_OFFSET))(this);
		}
	};
}
