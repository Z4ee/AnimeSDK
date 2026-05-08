#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUILoopText;

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1483F040)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_0__REFRESHPERSONALLEFTVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1483F050)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass86_0_TypeDefinitionIndex = 56285;

	class UIMainStoryPageController___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::MonoUILoopText* looptext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPersonalLeftView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_0__REFRESHPERSONALLEFTVIEW_B__0_OFFSET))(this);
		}
	};
}
