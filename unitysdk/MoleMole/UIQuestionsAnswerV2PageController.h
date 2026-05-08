#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerPageController.h"

class Class_1_FA793AB1D49D0132;
namespace MoleMole { class UIQuestionsAnswer3D3DModelController; }
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsListWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x147E9C90)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x147E9BE0)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x147E9B30)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147E9D20)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x147E9D30)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x147E9E00)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x147E9E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV2PageController_TypeDefinitionIndex = 38631;

	class UIQuestionsAnswerV2PageController : public ::MoleMole::UIQuestionsAnswerPageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsListWidgetController* CreateUIQuestionsListWidgetController(::Class_1_FA793AB1D49D0132* openParams)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* CreateUIQuestionsAnswerWidgetController(::Class_1_FA793AB1D49D0132* openParams)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* __base_CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* __base_CreateUIQuestionsAnswerWidgetController(::Class_1_FA793AB1D49D0132* P0)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, P0);
		}

		::MoleMole::UIQuestionsListWidgetController* __base_CreateUIQuestionsListWidgetController(::Class_1_FA793AB1D49D0132* P0)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, P0);
		}
	};
}
