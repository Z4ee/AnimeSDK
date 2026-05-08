#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaInsightLevelUpPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157EDA80)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_B__10_OFFSET UNITYSDK_OFFSET(0x157EDAE0)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x157EDA90)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x157EDBC0)
#define MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x157EDBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaInsightLevelUpPopWindowController___c__DisplayClass13_0_TypeDefinitionIndex = 74487;

	class UIForbiddenAreaInsightLevelUpPopWindowController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIForbiddenAreaInsightLevelUpPopWindowController* __4__this; // 0x10
		::System::Action* __9__10; // 0x18
		::System::UInt32 expNeededForNxtLv; // 0x20
		::System::UInt32 remainExp; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_B__10_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_B__7_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAINSIGHTLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}
