#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_494;
class Class_1_1710A4EE34865C78;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19367B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskSubPanelWidgetController_Context_TypeDefinitionIndex = 52113;

	class UIBangkovTaskSubPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_1710A4EE34865C78*>* QuestList; // 0x28
		::Class_0_16E4307DCC419505_494* bagPageController; // 0x30
		::System::Boolean IsNight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
