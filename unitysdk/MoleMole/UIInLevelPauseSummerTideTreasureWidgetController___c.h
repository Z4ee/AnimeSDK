#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189E5730)
#define MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189E5770)
#define MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0x189E5780)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSummerTideTreasureWidgetController___c_TypeDefinitionIndex = 57881;

	class UIInLevelPauseSummerTideTreasureWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInLevelPauseSummerTideTreasureWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelPauseSummerTideTreasureWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSummerTideTreasureWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A570);
		}
		static ::System::Comparison_1<::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSummerTideTreasureWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__17_0(::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* a, ::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data*, ::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESUMMERTIDETREASUREWIDGETCONTROLLER___C__REFRESHSCROLLVIEW_B__17_0_OFFSET))(this, a, b);
		}
	};
}
