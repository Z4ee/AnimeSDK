#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0E0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGeneralTipsWidgetController_Context_TypeDefinitionIndex = 73242;

	class UIMainCityGeneralTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* onClose; // 0x28
		::UnityEngine::RectTransform* maxTransform; // 0x30
		::System::String* key; // 0x38
		::System::Boolean isText; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
