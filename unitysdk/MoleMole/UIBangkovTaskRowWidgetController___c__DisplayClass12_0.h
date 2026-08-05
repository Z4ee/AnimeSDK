#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIBangkovTaskRowWidgetController; }

#define MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197F12C0)
#define MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHQUESTINFO_B__0_OFFSET UNITYSDK_OFFSET(0x197F12D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskRowWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 74383;

	class UIBangkovTaskRowWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovTaskRowWidgetController* __4__this; // 0x10
		::System::Int32 itemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshQuestInfo_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKROWWIDGETCONTROLLER___C__DISPLAYCLASS12_0__REFRESHQUESTINFO_B__0_OFFSET))(this, ctrl);
		}
	};
}
