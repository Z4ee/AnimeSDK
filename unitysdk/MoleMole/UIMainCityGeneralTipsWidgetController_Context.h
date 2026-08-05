#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9FAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGeneralTipsWidgetController_Context_TypeDefinitionIndex = 68200;

	class UIMainCityGeneralTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* key; // 0x28
		::System::Action* onClose; // 0x30
		::UnityEngine::RectTransform* maxTransform; // 0x38
		::System::Boolean isText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
