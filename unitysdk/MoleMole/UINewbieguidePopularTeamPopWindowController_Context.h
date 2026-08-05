#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UINewbieGuideRoleChoose02WidgetController_TeamSource.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1867BA00)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieguidePopularTeamPopWindowController_Context_TypeDefinitionIndex = 86903;

	class UINewbieguidePopularTeamPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource>* TeamSourceList; // 0x28
		::System::Action_1<::System::Int32>* OnCloseCallback; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* CurrentTeamAvatarIds; // 0x38
		::System::Action_1<::System::Int32>* OnApplyCallback; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* TeamList; // 0x48
		::System::Int32 ClaimedAvatarId; // 0x50
		::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource CurrentTeamSource; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
