#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UINewbieGuideRoleChoose02WidgetController_TeamSource.h"

namespace MoleMole { class UINewbieGuideRoleChoose02WidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDERECOMMENDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1987D040)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideRecommendPopWindowController_Context_TypeDefinitionIndex = 43108;

	class UINewbieGuideRecommendPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource>* TeamSourceList; // 0x28
		::MoleMole::UINewbieGuideRoleChoose02WidgetController* roleWidget; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* TeamList; // 0x38
		::System::Action_1<::System::Int32>* OnConfirmCallback; // 0x40
		::System::Int32 SelectedTeamIndex; // 0x48
		::System::Int32 ClaimedAvatarId; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDERECOMMENDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
