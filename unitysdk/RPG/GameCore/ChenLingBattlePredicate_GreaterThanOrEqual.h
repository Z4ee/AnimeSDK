#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_METHOD_3_590D4F63A73774E0_OFFSET UNITYSDK_OFFSET(0x1E00DA80)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_METHOD_3_9C66FB551688C842_OFFSET UNITYSDK_OFFSET(0x1E00DA20)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E00DA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePredicate_GreaterThanOrEqual_TypeDefinitionIndex = 15638;

	class ChenLingBattlePredicate_GreaterThanOrEqual : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Value1; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Value2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C66FB551688C842(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_METHOD_3_9C66FB551688C842_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_590D4F63A73774E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattlePredicate_GreaterThanOrEqual*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_GREATERTHANOREQUAL_METHOD_3_590D4F63A73774E0_OFFSET))(a1, a2);
		}
	};
}
