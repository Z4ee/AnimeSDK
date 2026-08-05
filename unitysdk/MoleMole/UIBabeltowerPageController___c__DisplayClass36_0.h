#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIBabeltowerPageController; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185120F0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS36_0___OPENBABELTOWERFIGHTINGINFO_G__OPEN_0_OFFSET UNITYSDK_OFFSET(0x18512100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass36_0_TypeDefinitionIndex = 88665;

	class UIBabeltowerPageController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::MoleMole::UIBabeltowerFightingInfoWidgetController* ctrl; // 0x18
		::System::Boolean directOpen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_g__Open_0(::System::UInt32 floor)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS36_0___OPENBABELTOWERFIGHTINGINFO_G__OPEN_0_OFFSET))(this, floor);
		}
	};
}
