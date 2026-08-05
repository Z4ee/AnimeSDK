#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1167;

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x196F9010)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS30_0__ONCLICKLEFTTAB_B__0_OFFSET UNITYSDK_OFFSET(0x196F9020)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController___c__DisplayClass30_0_TypeDefinitionIndex = 81480;

	class UIAutoBattlePVEV2PageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Int32 levelID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickLeftTab_b__0(::Class_2_208CC9941471731A_1167* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1167*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS30_0__ONCLICKLEFTTAB_B__0_OFFSET))(this, x);
		}
	};
}
