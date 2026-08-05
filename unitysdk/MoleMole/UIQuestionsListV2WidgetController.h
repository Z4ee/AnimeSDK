#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsListWidgetController.h"

#define MOLEMOLE_UIQUESTIONSLISTV2WIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x19894E30)
#define MOLEMOLE_UIQUESTIONSLISTV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19894EF0)
#define MOLEMOLE_UIQUESTIONSLISTV2WIDGETCONTROLLER___BASE_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x19894F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsListV2WidgetController_TypeDefinitionIndex = 81669;

	class UIQuestionsListV2WidgetController : public ::MoleMole::UIQuestionsListWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV2WIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET))(this);
		}

		::System::Void __base_OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV2WIDGETCONTROLLER___BASE_ONSETCREATEFUNC_OFFSET))(this);
		}
	};
}
