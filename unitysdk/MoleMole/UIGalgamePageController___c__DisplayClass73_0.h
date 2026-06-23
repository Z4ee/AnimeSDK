#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGalgamePageController; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS73_0__CLEARALLSTAGENODES_B__0_OFFSET UNITYSDK_OFFSET(0x16A92320)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92310)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass73_0_TypeDefinitionIndex = 54862;

	class UIGalgamePageController___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController* __4__this; // 0x10
		::System::Int32 stageNodeIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _ClearAllStageNodes_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS73_0__CLEARALLSTAGENODES_B__0_OFFSET))(this);
		}
	};
}
