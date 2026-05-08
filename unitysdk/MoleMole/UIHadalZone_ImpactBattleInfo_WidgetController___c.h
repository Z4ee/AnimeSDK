#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_61;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EEC30)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x149EEC70)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__RESETALLSUBLAYERS_B__11_1_OFFSET UNITYSDK_OFFSET(0x149EEC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex = 76074;

	class UIHadalZone_ImpactBattleInfo_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_61*>** StaticGet___9__11_1()
		{
			return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_61*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37D30);
		}
		static ::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_ImpactBattleInfo_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ResetAllSubLayers_b__11_1(::System::Boolean b, ::Class_3_025FF4981524A424_61* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_61*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLEINFO_WIDGETCONTROLLER___C__RESETALLSUBLAYERS_B__11_1_OFFSET))(this, b, rsp);
		}
	};
}
