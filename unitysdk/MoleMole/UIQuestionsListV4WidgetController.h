#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsListWidgetController.h"

#define MOLEMOLE_UIQUESTIONSLISTV4WIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x15785610)
#define MOLEMOLE_UIQUESTIONSLISTV4WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x157856D0)
#define MOLEMOLE_UIQUESTIONSLISTV4WIDGETCONTROLLER___BASE_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x157856E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsListV4WidgetController_TypeDefinitionIndex = 86879;

	class UIQuestionsListV4WidgetController : public ::MoleMole::UIQuestionsListWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV4WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV4WIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET))(this);
		}

		::System::Void __base_OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTV4WIDGETCONTROLLER___BASE_ONSETCREATEFUNC_OFFSET))(this);
		}
	};
}
