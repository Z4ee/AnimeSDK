#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIBabeltowerPageController; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4E960)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS37_0__OPENFIGHTINGWIDGET_G__ONCLOSE_0_OFFSET UNITYSDK_OFFSET(0x12F4E970)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS37_0__OPENFIGHTINGWIDGET_G___OPENFIGHTINGWIDGET_1_OFFSET UNITYSDK_OFFSET(0x12F4EA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass37_0_TypeDefinitionIndex = 66054;

	class UIBabeltowerPageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::MoleMole::UIBabeltowerFightingInfoWidgetController* ctrl; // 0x18
		::System::Boolean directOpen; // 0x20
		::System::UInt32 floor; // 0x24
		::System::Int32 initSelectBuf; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenFightingWidget_g__OnClose_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS37_0__OPENFIGHTINGWIDGET_G__ONCLOSE_0_OFFSET))(this);
		}

		::System::Void _OpenFightingWidget_g___OpenFightingWidget_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS37_0__OPENFIGHTINGWIDGET_G___OPENFIGHTINGWIDGET_1_OFFSET))(this);
		}
	};
}
