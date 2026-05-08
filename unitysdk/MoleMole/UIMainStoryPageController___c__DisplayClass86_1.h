#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUILoopText;

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1483F0D0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_1__REFRESHPERSONALLEFTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1483F0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass86_1_TypeDefinitionIndex = 56282;

	class UIMainStoryPageController___c__DisplayClass86_1 : public ::System::Object
	{
	public:
		::MonoUILoopText* looptext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshPersonalLeftView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS86_1__REFRESHPERSONALLEFTVIEW_B__1_OFFSET))(this);
		}
	};
}
