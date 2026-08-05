#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_3_025FF4981524A424_343;
namespace MoleMole { class UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_0; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x186CFDD0)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__5_OFFSET UNITYSDK_OFFSET(0x186D0010)
#define MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__6_OFFSET UNITYSDK_OFFSET(0x186D0300)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_1_TypeDefinitionIndex = 56791;

	class UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::Class_1_E081FCEC8F87505A* data; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* needResetSubLayers; // 0x18
		::MoleMole::UIHadalZone_ImpactBattle_LineupWidgetController___c__DisplayClass12_0* CS___8__locals1; // 0x20
		::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_343*>* __9__6; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__5_OFFSET))(this);
		}

		::System::Void _OpenSelectRolePage_b__6(::System::Boolean b, ::Class_3_025FF4981524A424_343* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_343*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_IMPACTBATTLE_LINEUPWIDGETCONTROLLER___C__DISPLAYCLASS12_1__OPENSELECTROLEPAGE_B__6_OFFSET))(this, b, rsp);
		}
	};
}
