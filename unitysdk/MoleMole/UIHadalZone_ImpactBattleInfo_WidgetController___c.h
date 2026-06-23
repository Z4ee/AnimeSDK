#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_115;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AAA500)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAA540)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__RESETALLSUBLAYERS_B__12_1_OFFSET UNITYSDK_OFFSET(0x16AAA550)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex = 77861;

	class UIHadalZone_ImpactBattleInfo_WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A230);
		}
		static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_115*>** StaticGet___9__12_1()
		{
			return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_115*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ResetAllSubLayers_b__12_1(::System::Boolean b, ::Class_3_025FF4981524A424_115* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_115*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__RESETALLSUBLAYERS_B__12_1_OFFSET))(this, b, rsp);
		}
	};
}
