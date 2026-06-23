#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156DFED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusMainWidgetController_Context_TypeDefinitionIndex = 67816;

	class UIVirusMainWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelectQuestChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
