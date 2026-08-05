#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS181_0__CLEARALLSTAGENODES_B__0_OFFSET UNITYSDK_OFFSET(0x186BF9F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS181_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186BF9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass181_0_TypeDefinitionIndex = 62781;

	class UIGalgamePageController___c__DisplayClass181_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Int32 stageNodeIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS181_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClearAllStageNodes_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS181_0__CLEARALLSTAGENODES_B__0_OFFSET))(this);
		}
	};
}
