#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerPageController.h"

class Class_1_FA793AB1D49D0132;
namespace MoleMole { class UIQuestionsAnswer3D3DModelController; }
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsListWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1717A0C0)
#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1717A010)
#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17179F60)
#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1717A150)
#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1717A160)
#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1717A230)
#define MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER___BASE_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1717A240)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV3PageController_TypeDefinitionIndex = 51939;

	class UIQuestionsAnswerV3PageController : public ::MoleMole::UIQuestionsAnswerPageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsListWidgetController* CreateUIQuestionsListWidgetController(::Class_1_FA793AB1D49D0132* openParams)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* CreateUIQuestionsAnswerWidgetController(::Class_1_FA793AB1D49D0132* openParams)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* __base_CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* __base_CreateUIQuestionsAnswerWidgetController(::Class_1_FA793AB1D49D0132* P0)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, P0);
		}

		::MoleMole::UIQuestionsListWidgetController* __base_CreateUIQuestionsListWidgetController(::Class_1_FA793AB1D49D0132* P0)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::Class_1_FA793AB1D49D0132*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV3PAGECONTROLLER___BASE_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, P0);
		}
	};
}
