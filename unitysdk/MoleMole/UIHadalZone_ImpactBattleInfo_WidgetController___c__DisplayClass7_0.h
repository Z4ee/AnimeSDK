#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_446;
class Class_3_3BE9E985CC6DA44B;
namespace MoleMole { class UIHadalZone_ImpactBattleInfo_WidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDE7C0)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0___UPDATEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x17BDE7D0)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__DISPLAYCLASS7_0___UPDATEINFO_B__1_OFFSET UNITYSDK_OFFSET(0x17BDEB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattleInfo_WidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 64586;

	class UIHadalZone_ImpactBattleInfo_WidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Class_1_5DA2E7556103D5A3_446* zoneInfo; // 0x10
		::Class_3_3BE9E985CC6DA44B* layerRecord; // 0x18
		::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController* __4__this; // 0x20
		::System::Action_1<::System::Int32>* __9__1; // 0x28

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
