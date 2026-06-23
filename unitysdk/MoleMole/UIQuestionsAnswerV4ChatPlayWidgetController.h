#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerChatPlayWidgetController.h"

#define MOLEMOLE_UIQUESTIONSANSWERV4CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C793A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV4ChatPlayWidgetController_TypeDefinitionIndex = 43457;

	class UIQuestionsAnswerV4ChatPlayWidgetController : public ::MoleMole::UIQuestionsAnswerChatPlayWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV4CHATPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
