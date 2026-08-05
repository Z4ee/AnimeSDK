#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralDialogStaticBlurWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA99A0)
#define MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___C__DISPLAYCLASS13_0__STARTUIBLURFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x19FA99B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDialogStaticBlurWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 56123;

	class UIGeneralDialogStaticBlurWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralDialogStaticBlurWidgetController* __4__this; // 0x10
		::System::Action_1<::System::Int32>* endAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartUIBlurFadeOut_b__0(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDIALOGSTATICBLURWIDGETCONTROLLER___C__DISPLAYCLASS13_0__STARTUIBLURFADEOUT_B__0_OFFSET))(this, id);
		}
	};
}
