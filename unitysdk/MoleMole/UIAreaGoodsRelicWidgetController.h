#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowRelicOptionItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_UIAREAGOODSRELICWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19349970)
#define MOLEMOLE_UIAREAGOODSRELICWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19349CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsRelicWidgetController_TypeDefinitionIndex = 48797;

	class UIAreaGoodsRelicWidgetController : public ::MoleMole::UIHollowRelicOptionItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSRELICWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSRELICWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}
	};
}
