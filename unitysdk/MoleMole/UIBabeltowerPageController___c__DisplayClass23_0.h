#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBabeltowerPageController; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19299DF0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHFLOORCHANGEANIM_B__0_OFFSET UNITYSDK_OFFSET(0x19299E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController___c__DisplayClass23_0_TypeDefinitionIndex = 88661;

	class UIBabeltowerPageController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBabeltowerPageController* __4__this; // 0x10
		::System::Int32 currentReachFloor; // 0x18
		::System::Int32 reachFloor; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshFloorChangeAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___C__DISPLAYCLASS23_0__REFRESHFLOORCHANGEANIM_B__0_OFFSET))(this);
		}
	};
}
