#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_737370D674376C00;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE5520)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewDialogPopWindowController_Context_TypeDefinitionIndex = 56695;

	class UIGalgameReviewDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>* reviewList; // 0x28
		::System::Action* closeCallback; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>* list, ::System::Action* closeCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_737370D674376C00*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, list, closeCB);
		}
	};
}
