#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140D08A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03RowAllRoundWidgetController_Context_TypeDefinitionIndex = 45318;

	class UITabBtn03RowAllRoundWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* content; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
