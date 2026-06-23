#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityDetectiveStorePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E435D0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHSCROLLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15E435E0)
#define MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHSCROLLVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x15E43760)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveStorePageController___c__DisplayClass17_0_TypeDefinitionIndex = 75486;

	class UIActivityDetectiveStorePageController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* refreshHandler; // 0x10
		::MoleMole::UIActivityDetectiveStorePageController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Int32 capturedSelectIdx; // 0x28
		::System::Int32 capturedScrollIdx; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshScrollView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHSCROLLVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshScrollView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVESTOREPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHSCROLLVIEW_B__1_OFFSET))(this);
		}
	};
}
