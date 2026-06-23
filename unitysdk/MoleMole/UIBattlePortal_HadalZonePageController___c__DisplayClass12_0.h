#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_399;

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F58480)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0___UPDATEZONES_B__0_OFFSET UNITYSDK_OFFSET(0x17F58490)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController___c__DisplayClass12_0_TypeDefinitionIndex = 77132;

	class UIBattlePortal_HadalZonePageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 maxLayerIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateZones_b__0(::Class_1_5DA2E7556103D5A3_399* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__DISPLAYCLASS12_0___UPDATEZONES_B__0_OFFSET))(this, t);
		}
	};
}
