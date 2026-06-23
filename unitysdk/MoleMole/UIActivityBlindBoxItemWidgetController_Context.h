#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_920;

#define MOLEMOLE_UIACTIVITYBLINDBOXITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1731FA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxItemWidgetController_Context_TypeDefinitionIndex = 66905;

	class UIActivityBlindBoxItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_920* Config; // 0x28
		::Class_1_D375C91CCE5D3999* ActivityData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
