#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerPage02Controller; }

#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F47FC0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS13_0__ONPOSTREFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17F47FD0)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS13_0__ONPOSTREFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17F48000)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage02Controller___c__DisplayClass13_0_TypeDefinitionIndex = 46142;

	class UIBabeltowerPage02Controller___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPage02Controller* __4__this; // 0x10
		::System::Int32 initScrollIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS13_0__ONPOSTREFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _OnPostRefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__DISPLAYCLASS13_0__ONPOSTREFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
