#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF62B9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightTastListWidget02WidgetContext_TypeDefinitionIndex = 57714;

	class UIUrbanMapRightTastListWidget02WidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*>* OnClick; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
