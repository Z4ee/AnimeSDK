#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainBottomWidgetController_BuffSlot; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14816C90)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT___C__DISPLAYCLASS41_0__PLAYBUFFDES_B__0_OFFSET UNITYSDK_OFFSET(0x148177A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass41_0_TypeDefinitionIndex = 57766;

	class UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::String* desc; // 0x10
		::MoleMole::UIHollowMainBottomWidgetController_BuffSlot* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayBuffDes_b__0(::System::Action* doneCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT___C__DISPLAYCLASS41_0__PLAYBUFFDES_B__0_OFFSET))(this, doneCB);
		}
	};
}
