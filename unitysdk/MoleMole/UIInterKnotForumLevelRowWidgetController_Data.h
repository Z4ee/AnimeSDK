#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotForumLevelRowWidgetController_InterKnotForumLevelRow_DataBind; }

#define MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174BC990)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotForumLevelRowWidgetController_Data_TypeDefinitionIndex = 69815;

	class UIInterKnotForumLevelRowWidgetController_Data : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotForumLevelRowWidgetController_InterKnotForumLevelRow_DataBind* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTFORUMLEVELROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
