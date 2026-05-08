#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovTaskRowWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED0C30)
#define MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHQUESTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x15ED0C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskRowWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 54894;

	class UIBangkovTaskRowWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovTaskRowWidgetController* __4__this; // 0x10
		::System::Int32 itemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshQuestInfo_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHQUESTINFO_B__0_OFFSET))(this, ctrl);
		}
	};
}
