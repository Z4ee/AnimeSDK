#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0D880)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardTabBtnWidgetController_Context_TypeDefinitionIndex = 86495;

	class UIZenkovDelegateBoardTabBtnWidgetController_Context : public ::System::Object
	{
	public:
		::System::Action_1<::Enum_3_C96DD177C1F2A967>* OnTabClicked; // 0x10
		::Enum_3_C96DD177C1F2A967 SubType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
