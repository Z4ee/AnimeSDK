#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleInfoDataContext; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS126_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E75D30)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS126_0__DOJUMPTODETAILPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x15E75D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass126_0_TypeDefinitionIndex = 52781;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass126_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleInfoDataContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS126_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoJumpToDetailPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS126_0__DOJUMPTODETAILPAGE_B__0_OFFSET))(this);
		}
	};
}
