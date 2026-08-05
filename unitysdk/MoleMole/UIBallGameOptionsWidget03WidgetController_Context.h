#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_6F28FFD006F2B451;

#define MOLEMOLE_UIBALLGAMEOPTIONSWIDGET03WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDD5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsWidget03WidgetController_Context_TypeDefinitionIndex = 93239;

	class UIBallGameOptionsWidget03WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_6F28FFD006F2B451* world; // 0x28
		::System::Int32 Index; // 0x30
		::System::Int32 BulletID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSWIDGET03WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
