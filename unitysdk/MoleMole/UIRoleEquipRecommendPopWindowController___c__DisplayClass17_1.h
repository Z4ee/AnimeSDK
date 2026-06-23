#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecommendTypeRandPropertyRowWidgetController; }
namespace MoleMole { class UIRoleEquipRecommendPopWindowController___c__DisplayClass17_0; }

#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F384C0)
#define MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__REFRESHRANDPROPERTYFILTERITEMS_B__2_OFFSET UNITYSDK_OFFSET(0x15F384D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipRecommendPopWindowController___c__DisplayClass17_1_TypeDefinitionIndex = 51773;

	class UIRoleEquipRecommendPopWindowController___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRecommendTypeRandPropertyRowWidgetController* itemCtrl; // 0x10
		::MoleMole::UIRoleEquipRecommendPopWindowController___c__DisplayClass17_0* CS___8__locals1; // 0x18
		::System::Int32 itemIdx; // 0x20
		::System::Boolean needSelect; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRandPropertyFilterItems_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPRECOMMENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__REFRESHRANDPROPERTYFILTERITEMS_B__2_OFFSET))(this);
		}
	};
}
