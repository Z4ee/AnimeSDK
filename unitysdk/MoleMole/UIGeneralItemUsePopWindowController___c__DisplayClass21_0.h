#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1730EFA0)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__DOPOWERACTION_B__1_OFFSET UNITYSDK_OFFSET(0x1730EFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 80928;

	class UIGeneralItemUsePopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Int32 energyID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPowerAction_b__1(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__DOPOWERACTION_B__1_OFFSET))(this, msg);
		}
	};
}
