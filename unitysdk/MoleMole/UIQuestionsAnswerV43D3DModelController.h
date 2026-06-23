#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswer3D3DModelController.h"

namespace MoleMole { class UIQuestionsAnswerScreenWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERV43D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15320310)
#define MOLEMOLE_UIQUESTIONSANSWERV43D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x153203C0)
#define MOLEMOLE_UIQUESTIONSANSWERV43D3DMODELCONTROLLER___BASE_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15320420)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV43D3DModelController_TypeDefinitionIndex = 62697;

	class UIQuestionsAnswerV43D3DModelController : public ::MoleMole::UIQuestionsAnswer3D3DModelController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV43D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* CreateUIQuestionsAnswerScreenWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV43D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* __base_CreateUIQuestionsAnswerScreenWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV43D3DMODELCONTROLLER___BASE_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET))(this);
		}
	};
}
