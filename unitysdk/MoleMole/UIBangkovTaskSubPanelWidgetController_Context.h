#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1710A4EE34865C78;
namespace MoleMole { class UIBangkovBagPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBD7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskSubPanelWidgetController_Context_TypeDefinitionIndex = 70999;

	class UIBangkovTaskSubPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBangkovBagPageController* bagPageController; // 0x28
		::System::Collections::Generic::List_1<::Class_1_1710A4EE34865C78*>* QuestList; // 0x30
		::System::Boolean IsNight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
