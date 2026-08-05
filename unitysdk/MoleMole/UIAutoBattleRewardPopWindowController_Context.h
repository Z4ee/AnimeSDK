#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F0E4E2848B1D52CE;

#define MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x196F91F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRewardPopWindowController_Context_TypeDefinitionIndex = 53521;

	class UIAutoBattleRewardPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F0E4E2848B1D52CE* ViewModel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
