#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_558;

#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4D7F0)
#define MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTOWERID_B__0_OFFSET UNITYSDK_OFFSET(0x12F4D800)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerMenuBtnWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 81545;

	class UIBabeltowerMenuBtnWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_558* template_; // 0x10
		::System::Int32 towerid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTowerID_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUBTNWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTOWERID_B__0_OFFSET))(this);
		}
	};
}
