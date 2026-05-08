#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_1A3197598F874EB7_Class_1_EAA4242F06F6F828;
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164848D0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__0_OFFSET UNITYSDK_OFFSET(0x164848E0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__1_OFFSET UNITYSDK_OFFSET(0x16484AD0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__2_OFFSET UNITYSDK_OFFSET(0x16484A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 69674;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDailyQuestHandBookWidgetController* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::Class_2_1A3197598F874EB7_Class_1_EAA4242F06F6F828* questGroup; // 0x20
		::System::Int32 formerTakeVitalityLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryTakeVitalityRewards_b__0(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__0_OFFSET))(this, items);
		}

		::System::Void _TryTakeVitalityRewards_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__2_OFFSET))(this);
		}

		::System::Void _TryTakeVitalityRewards_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRYTAKEVITALITYREWARDS_B__1_OFFSET))(this);
		}
	};
}
