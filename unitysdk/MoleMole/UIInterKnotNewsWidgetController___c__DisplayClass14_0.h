#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_187;
namespace MoleMole { class UIInterKnotNewsWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x146B76C0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEGETBUTTON_B__0_OFFSET UNITYSDK_OFFSET(0x146B76D0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEGETBUTTON_G__SETBTN_1_OFFSET UNITYSDK_OFFSET(0x146B7890)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 69417;

	class UIInterKnotNewsWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotNewsWidgetController* __4__this; // 0x10
		::Class_2_208CC9941471731A_187* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateGetButton_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEGETBUTTON_B__0_OFFSET))(this);
		}

		::System::Void _UpdateGetButton_g__SetBtn_1(::System::String* key, ::System::Boolean interactable, ::System::Boolean effectEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEGETBUTTON_G__SETBTN_1_OFFSET))(this, key, interactable, effectEnabled);
		}
	};
}
