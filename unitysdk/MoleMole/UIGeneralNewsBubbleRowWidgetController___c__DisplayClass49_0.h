#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BA235DE13B5BE53.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16871980)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PLAYSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x16871990)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass49_0_TypeDefinitionIndex = 73375;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::Struct_2_9BA235DE13B5BE53 template_; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x58
		::MoleMole::UIBubbleTips* tip; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySound_b__0(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS49_0__PLAYSOUND_B__0_OFFSET))(this, id);
		}
	};
}
