#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A308370)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_0__SWITCHMAINCITYBGM_B__0_OFFSET UNITYSDK_OFFSET(0x1A308380)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass105_0_TypeDefinitionIndex = 62832;

	class UIGalgamePageController___c__DisplayClass105_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Int32 prevMaincityBGMId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchMaincityBGM_b__0(::System::Int32 newBGMId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS105_0__SWITCHMAINCITYBGM_B__0_OFFSET))(this, newBGMId);
		}
	};
}
