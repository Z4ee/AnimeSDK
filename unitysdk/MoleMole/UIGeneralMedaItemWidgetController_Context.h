#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3E4DF6914A0A9F00.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALMEDAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166ECE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMedaItemWidgetController_Context_TypeDefinitionIndex = 79949;

	class UIGeneralMedaItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextTag; // 0x28
		::System::String* TextValue; // 0x30
		::Enum_3_3E4DF6914A0A9F00 RankState; // 0x38
		::System::Boolean EnableInteractable; // 0x3C
		::System::Boolean IsShowText; // 0x3D
		::System::Int32 MedalID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMEDAITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
