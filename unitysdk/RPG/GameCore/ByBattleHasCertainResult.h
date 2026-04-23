#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_33B01EED912CA497_OFFSET UNITYSDK_OFFSET(0x1871F890)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_9BC42A7C9C25997D_OFFSET UNITYSDK_OFFSET(0x1871F7C0)
#define RPG_GAMECORE_BYBATTLEHASCERTAINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1871F840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleHasCertainResult_TypeDefinitionIndex = 21458;

	class ByBattleHasCertainResult : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BC42A7C9C25997D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleHasCertainResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleHasCertainResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_9BC42A7C9C25997D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33B01EED912CA497(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByBattleHasCertainResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByBattleHasCertainResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEHASCERTAINRESULT_METHOD_4_33B01EED912CA497_OFFSET))(a1, a2);
		}
	};
}
