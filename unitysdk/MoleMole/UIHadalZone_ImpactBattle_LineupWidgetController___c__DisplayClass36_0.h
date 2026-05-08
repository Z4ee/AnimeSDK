#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_61;
namespace MoleMole { class UIHadalZone_ImpactBattle_LineupWidgetController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKLAYERRECORDWEAPONEQUIPWITHTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x15F9CC70)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKLAYERRECORDWEAPONEQUIPWITHTIPS_B__1_OFFSET UNITYSDK_OFFSET(0x15F9CF40)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9CC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass36_0_TypeDefinitionIndex = 51568;

	class UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action* onPassCheck; // 0x10
		::MoleMole::UIHadalZone_ImpactBattle_LineupWidgetController* __4__this; // 0x18
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_61*>* __9__1; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* needResetSubLayers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckLayerRecordWeaponEquipWithTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKLAYERRECORDWEAPONEQUIPWITHTIPS_B__0_OFFSET))(this);
		}

		::System::Void _CheckLayerRecordWeaponEquipWithTips_b__1(::System::Boolean b, ::Class_3_025FF4981524A424_61* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_61*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS36_0__CHECKLAYERRECORDWEAPONEQUIPWITHTIPS_B__1_OFFSET))(this, b, rsp);
		}
	};
}
