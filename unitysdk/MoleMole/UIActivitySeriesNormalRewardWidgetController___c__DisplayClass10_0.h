#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D3AF1309617E53D.h"
#include "unitysdk/System/Object.h"

class Class_3_1699D6295DC3F818_1;
namespace MoleMole { class UIActivitySeriesNormalRewardWidgetController; }

#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1954C570)
#define MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1954C580)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySeriesNormalRewardWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 65146;

	class UIActivitySeriesNormalRewardWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::Class_3_1699D6295DC3F818_1* reward; // 0x10
		::MoleMole::UIActivitySeriesNormalRewardWidgetController* __4__this; // 0x18
		::Enum_3_5D3AF1309617E53D status; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSERIESNORMALREWARDWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
