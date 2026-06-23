#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowItemOptionsUpGradePopWindowController.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADEPOPWINDOWCONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x16F8B210)
#define MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8B2C0)
#define MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADEPOPWINDOWCONTROLLER___BASE_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x16F8B2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRelicOptionsUpGradePopWindowController_TypeDefinitionIndex = 80737;

	class UIHollowRelicOptionsUpGradePopWindowController : public ::MoleMole::UIHollowItemOptionsUpGradePopWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADEPOPWINDOWCONTROLLER_CREATEITEM_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* __base_CreateItem(::System::Func_1<::MoleMole::UIControlReference*>* P0)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRELICOPTIONSUPGRADEPOPWINDOWCONTROLLER___BASE_CREATEITEM_OFFSET))(this, P0);
		}
	};
}
