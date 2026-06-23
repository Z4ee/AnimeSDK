#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166B28B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchPageController_Context_TypeDefinitionIndex = 44198;

	class UICoopMatchPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
