#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGoldMiningDayRewardPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F96270)
#define MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___C__DISPLAYCLASS11_0__ONALLRECEIVEBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x15F96280)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayRewardPageController___c__DisplayClass11_0_TypeDefinitionIndex = 69298;

	class UIGoldMiningDayRewardPageController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* indexLs; // 0x10
		::MoleMole::UIGoldMiningDayRewardPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAllReceiveBtnClick_b__0(::System::Boolean ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYREWARDPAGECONTROLLER___C__DISPLAYCLASS11_0__ONALLRECEIVEBTNCLICK_B__0_OFFSET))(this, ret);
		}
	};
}
