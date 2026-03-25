#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_5A315B53650D5BA3_OFFSET UNITYSDK_OFFSET(0x16F4DFE0)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_A2657AAD4BFA65A7_OFFSET UNITYSDK_OFFSET(0x16F4E0B0)
#define RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4E060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsWeakTypeActive_TypeDefinitionIndex = 19109;

	class AdventureByIsWeakTypeActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5A315B53650D5BA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsWeakTypeActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_5A315B53650D5BA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2657AAD4BFA65A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISWEAKTYPEACTIVE_METHOD_4_A2657AAD4BFA65A7_OFFSET))(a1, a2);
		}
	};
}
