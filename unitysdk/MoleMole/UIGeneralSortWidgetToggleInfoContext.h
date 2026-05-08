#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_546C6222FBEA4460;

#define MOLEMOLE_UIGENERALSORTWIDGETTOGGLEINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x146673C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSortWidgetToggleInfoContext_TypeDefinitionIndex = 66379;

	class UIGeneralSortWidgetToggleInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_546C6222FBEA4460* ToggleInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSORTWIDGETTOGGLEINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
