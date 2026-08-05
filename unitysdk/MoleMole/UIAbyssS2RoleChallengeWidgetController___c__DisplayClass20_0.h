#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E032E0)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOLINEUPSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x18E032F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 88085;

	class UIAbyssS2RoleChallengeWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Int32 lockSlotCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GoLineupSelect_b__0(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGEWIDGETCONTROLLER___C__DISPLAYCLASS20_0__GOLINEUPSELECT_B__0_OFFSET))(this, i);
		}
	};
}
