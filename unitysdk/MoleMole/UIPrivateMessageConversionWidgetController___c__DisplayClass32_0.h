#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPrivateMessageConversionWidgetController; }

#define MOLEMOLE_UIPRIVATEMESSAGECONVERSIONWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148612C0)
#define MOLEMOLE_UIPRIVATEMESSAGECONVERSIONWIDGETCONTROLLER___C__DISPLAYCLASS32_0__SETFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x148612D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageConversionWidgetController___c__DisplayClass32_0_TypeDefinitionIndex = 55310;

	class UIPrivateMessageConversionWidgetController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPrivateMessageConversionWidgetController* __4__this; // 0x10
		::System::Boolean isFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGECONVERSIONWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGECONVERSIONWIDGETCONTROLLER___C__DISPLAYCLASS32_0__SETFINISH_B__0_OFFSET))(this);
		}
	};
}
