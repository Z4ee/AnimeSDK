#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UINewbieGuideRoleChoose02WidgetController_TeamSource.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEROLECHOOSE02WIDGETCONTROLLER_TEAMSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15171200)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideRoleChoose02WidgetController_TeamSelection_TypeDefinitionIndex = 70444;

	class UINewbieGuideRoleChoose02WidgetController_TeamSelection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarIds; // 0x10
		::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource Source; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEROLECHOOSE02WIDGETCONTROLLER_TEAMSELECTION__CTOR_OFFSET))(this);
		}
	};
}
