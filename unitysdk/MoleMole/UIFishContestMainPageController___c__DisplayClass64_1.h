#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFishContestMainPageController___c__DisplayClass64_0; }

#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_1__CLOSEUI_B__3_OFFSET UNITYSDK_OFFSET(0x172FB3F0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET UNITYSDK_OFFSET(0x172FB2E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController___c__DisplayClass64_1_TypeDefinitionIndex = 42902;

	class UIFishContestMainPageController___c__DisplayClass64_1 : public ::System::Object
	{
	public:
		::MoleMole::UIFishContestMainPageController___c__DisplayClass64_0* CS___8__locals1; // 0x10
		::System::Boolean restart; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_1__CTOR_OFFSET))(this);
		}

		::System::Void _CloseUI_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS64_1__CLOSEUI_B__3_OFFSET))(this);
		}
	};
}
