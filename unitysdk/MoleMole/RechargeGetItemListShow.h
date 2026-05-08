#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GetItemListShow.h"

class Class_2_21B3639A8626BA94;

#define MOLEMOLE_RECHARGEGETITEMLISTSHOW_ORDERCONFIRM_OFFSET UNITYSDK_OFFSET(0x1386A2B0)
#define MOLEMOLE_RECHARGEGETITEMLISTSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1386A240)
#define MOLEMOLE_RECHARGEGETITEMLISTSHOW___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1386A3F0)

namespace MoleMole
{
	inline static constexpr unsigned int RechargeGetItemListShow_TypeDefinitionIndex = 75940;

	class RechargeGetItemListShow : public ::MoleMole::GetItemListShow
	{
	public:
		::System::Void _ctor(::Class_2_21B3639A8626BA94* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_21B3639A8626BA94*))((::PBYTE)hIl2Cpp + MOLEMOLE_RECHARGEGETITEMLISTSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OrderConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RECHARGEGETITEMLISTSHOW_ORDERCONFIRM_OFFSET))(this);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RECHARGEGETITEMLISTSHOW___CTOR_B__0_0_OFFSET))(this);
		}
	};
}
