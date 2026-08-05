#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaInsightLevelUpPopWindowController___c__DisplayClass13_0; }

#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC5AB0)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17BC5AC0)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_1__REFRESHLEVELTXTVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x17BC5B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaInsightLevelUpPopWindowController___c__DisplayClass13_1_TypeDefinitionIndex = 72901;

	class UIForbiddenAreaInsightLevelUpPopWindowController___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::MoleMole::UIForbiddenAreaInsightLevelUpPopWindowController___c__DisplayClass13_0* CS___8__locals1; // 0x10
		::System::Single timer; // 0x18
		::System::Single prvExpRatio; // 0x1C
		::System::Single remainExpRatio; // 0x20
		::System::Single realExpProgressDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_1__REFRESHLEVELTXTVIEW_B__2_OFFSET))(this);
		}
	};
}
