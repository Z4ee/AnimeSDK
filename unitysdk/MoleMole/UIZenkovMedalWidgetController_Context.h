#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21950)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMedalWidgetController_Context_TypeDefinitionIndex = 70862;

	class UIZenkovMedalWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* CloseCallback; // 0x28
		::System::Int32 FromMedal; // 0x30
		::System::Int32 ToMedal; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMEDALWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
