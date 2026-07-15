#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E0B808936AD386AC;

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1866CA20)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS28_0___FILLREQCOSTLISTS_B__0_OFFSET UNITYSDK_OFFSET(0x1866CBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQuickGrowCalculator___c__DisplayClass28_0_TypeDefinitionIndex = 59709;

	class AvatarQuickGrowCalculator___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::Class_1_E0B808936AD386AC* actualPromotion; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void __FillReqCostLists_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR___C__DISPLAYCLASS28_0___FILLREQCOSTLISTS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
