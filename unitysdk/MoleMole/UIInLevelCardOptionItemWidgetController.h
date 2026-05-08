#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardOptionItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER_CHECKCARDISNEW_OFFSET UNITYSDK_OFFSET(0x15CEF230)
#define MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15CEF0D0)
#define MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15CEF5E0)
#define MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15CEF610)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCardOptionItemWidgetController_TypeDefinitionIndex = 79421;

	class UIInLevelCardOptionItemWidgetController : public ::MoleMole::UIHollowCardOptionItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean CheckCardIsNew(::System::Int32 itemid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER_CHECKCARDISNEW_OFFSET))(this, itemid);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCARDOPTIONITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
