#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_336;
class Class_3_E9FF194CA9EF9D04;
namespace MoleMole { class UIHadalZone_ImpactBattleInfo_WidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155C26B0)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0___UPDATEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x155C26C0)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0___UPDATEINFO_B__1_OFFSET UNITYSDK_OFFSET(0x155C2A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattleInfo_WidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 76075;

	class UIHadalZone_ImpactBattleInfo_WidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* __9__1; // 0x10
		::Class_1_5DA2E7556103D5A3_336* zoneInfo; // 0x18
		::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController* __4__this; // 0x20
		::Class_3_E9FF194CA9EF9D04* layerRecord; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void __UpdateInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0___UPDATEINFO_B__0_OFFSET))(this);
		}

		::System::Void __UpdateInfo_b__1(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0___UPDATEINFO_B__1_OFFSET))(this, idx);
		}
	};
}
