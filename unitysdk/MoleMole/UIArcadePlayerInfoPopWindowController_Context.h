#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B61C4EDDF0AF60D0;
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIARCADEPLAYERINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x197734D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayerInfoPopWindowController_Context_TypeDefinitionIndex = 63425;

	class UIArcadePlayerInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* ShowPlayerNameCallback; // 0x28
		::System::Collections::Generic::List_1<::Class_1_B61C4EDDF0AF60D0*>* playerInfoList; // 0x30
		::System::Boolean DefaultShowPlayerName; // 0x38
		::System::Boolean ShowPlayerName; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
