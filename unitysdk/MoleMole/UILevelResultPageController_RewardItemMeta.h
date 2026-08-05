#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EBattleRewardType.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REWARDITEMMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x8AA1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController_RewardItemMeta_TypeDefinitionIndex = 69278;

	struct alignas(8) UILevelResultPageController_RewardItemMeta
	{
		::System::Int32 id; // 0x10
		::Share::EBattleRewardType type; // 0x14
		::Class_1_0D6706375CDAAE8C* item; // 0x18

		::System::Void _ctor(::System::Int32 id, ::Share::EBattleRewardType type, ::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Share::EBattleRewardType, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER_REWARDITEMMETA__CTOR_OFFSET))(this, id, type, item);
		}
	};
}
