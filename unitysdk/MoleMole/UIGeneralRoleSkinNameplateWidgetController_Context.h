#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCBB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSkinNameplateWidgetController_Context_TypeDefinitionIndex = 65227;

	class UIGeneralRoleSkinNameplateWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Name; // 0x28
		::System::String* SubName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
