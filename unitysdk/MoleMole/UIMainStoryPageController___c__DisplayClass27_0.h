#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUILoopText;

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D51380)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS27_0__REFRESHLEFTVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15D51390)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS27_0__REFRESHLEFTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x15D51410)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass27_0_TypeDefinitionIndex = 56281;

	class UIMainStoryPageController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MonoUILoopText* looptext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLeftView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS27_0__REFRESHLEFTVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshLeftView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS27_0__REFRESHLEFTVIEW_B__1_OFFSET))(this);
		}
	};
}
