#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DEC0174660AB7EDF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIEditBtnSmallWidgetController_Context; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1529F5E0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__RESETBTNBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1529F5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 45486;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Enum_3_DEC0174660AB7EDF type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetBtnByType_b__0(::MoleMole::UIEditBtnSmallWidgetController_Context* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIEditBtnSmallWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__RESETBTNBYTYPE_B__0_OFFSET))(this, item);
		}
	};
}
