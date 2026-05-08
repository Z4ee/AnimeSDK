#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace MoleMole { class UIDoubleEliteSweepRewardListRowController___c__DisplayClass5_0; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16488B60)
#define MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___C__DISPLAYCLASS5_1__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x16488B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteSweepRewardListRowController___c__DisplayClass5_1_TypeDefinitionIndex = 66944;

	class UIDoubleEliteSweepRewardListRowController___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnWidgetController* itemController; // 0x10
		::MoleMole::UIDoubleEliteSweepRewardListRowController___c__DisplayClass5_0* CS___8__locals1; // 0x18
		::Class_1_1685EC66FBD28897* viewData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0(::System::Int32 curIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPREWARDLISTROWCONTROLLER___C__DISPLAYCLASS5_1__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, curIndex);
		}
	};
}
