#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswer3D3DModelController.h"

namespace MoleMole { class UIQuestionsAnswerScreenWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERV33D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15C93A00)
#define MOLEMOLE_UIQUESTIONSANSWERV33D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C93AB0)
#define MOLEMOLE_UIQUESTIONSANSWERV33D3DMODELCONTROLLER___BASE_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15C93B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV33D3DModelController_TypeDefinitionIndex = 43059;

	class UIQuestionsAnswerV33D3DModelController : public ::MoleMole::UIQuestionsAnswer3D3DModelController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV33D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* CreateUIQuestionsAnswerScreenWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV33D3DMODELCONTROLLER_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerScreenWidgetController* __base_CreateUIQuestionsAnswerScreenWidgetController()
		{
			return ((::MoleMole::UIQuestionsAnswerScreenWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV33D3DMODELCONTROLLER___BASE_CREATEUIQUESTIONSANSWERSCREENWIDGETCONTROLLER_OFFSET))(this);
		}
	};
}
