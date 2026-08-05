#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1014;
class Class_2_208CC9941471731A_775;

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEF990)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18BEF9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController___c__DisplayClass21_0_TypeDefinitionIndex = 81483;

	class UIAutoBattlePVEV2PageController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_775* levelConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__0(::Class_2_208CC9941471731A_1014* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1014*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS21_0__REFRESHVIEW_B__0_OFFSET))(this, x);
		}
	};
}
