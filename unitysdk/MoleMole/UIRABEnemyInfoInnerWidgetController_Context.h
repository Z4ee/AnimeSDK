#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIRABLevelEnemyRowWidgetController_Data; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150F8D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEnemyInfoInnerWidgetController_Context_TypeDefinitionIndex = 63582;

	class UIRABEnemyInfoInnerWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRABLevelEnemyRowWidgetController_Data*>* monsters; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
