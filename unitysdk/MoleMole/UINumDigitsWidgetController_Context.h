#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A056C0)

namespace MoleMole
{
	inline static constexpr unsigned int UINumDigitsWidgetController_Context_TypeDefinitionIndex = 43898;

	class UINumDigitsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* DigitImgFormat; // 0x28
		::System::Boolean UseAnimation; // 0x30
		::System::Boolean HideLeadingZeros; // 0x31
		::System::Int32 Num; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINUMDIGITSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
