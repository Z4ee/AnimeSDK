#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186D31A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS41_0__SETSINGLECREATEFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x186D31B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass41_0_TypeDefinitionIndex = 79822;

	class UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Func_3<::Enum_3_7A4252233BCEB3A9, ::System::Func_1<::MoleMole::UIControlReference*>*, ::MoleMole::ScrollViewItemWidgetController*>* createFunc; // 0x10
		::Enum_3_7A4252233BCEB3A9 ctrlId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _SetSingleCreateFunc_b__0(::System::Func_1<::MoleMole::UIControlReference*>* referenceFunc)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS41_0__SETSINGLECREATEFUNC_B__0_OFFSET))(this, referenceFunc);
		}
	};
}
