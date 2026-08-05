#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGACHAOPTSPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D90D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptSPanelWidgetController_Context_TypeDefinitionIndex = 66998;

	class UIGachaOptSPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* OnRequestFocusLeft; // 0x28
		::System::Action* OnDirtyChanged; // 0x30
		::System::Int32 GachaID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTSPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
