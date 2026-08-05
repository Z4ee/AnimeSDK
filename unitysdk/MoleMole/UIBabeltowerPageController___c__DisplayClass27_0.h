#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerPageController; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1601DD30)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS27_0__REFRESHBASEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1601DD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass27_0_TypeDefinitionIndex = 88666;

	class UIBabeltowerPageController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::System::Int32 curPhase; // 0x18
		::System::Int32 lastPhase; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBaseView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS27_0__REFRESHBASEVIEW_B__0_OFFSET))(this);
		}
	};
}
