#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIBabeltowerPage02Controller; }

#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19563E20)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS6_0___OPENBABELTOWERFIGHTINGINFO_G__OPEN_0_OFFSET UNITYSDK_OFFSET(0x19563E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage02Controller___c__DisplayClass6_0_TypeDefinitionIndex = 85335;

	class UIBabeltowerPage02Controller___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPage02Controller* __4__this; // 0x10
		::MoleMole::UIBabeltowerFightingInfoWidgetController* ctrl; // 0x18
		::System::Boolean directOpen; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_g__Open_0(::System::UInt32 floor)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS6_0___OPENBABELTOWERFIGHTINGINFO_G__OPEN_0_OFFSET))(this, floor);
		}
	};
}
