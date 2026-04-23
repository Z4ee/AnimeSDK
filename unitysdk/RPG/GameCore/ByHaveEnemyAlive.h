#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_816E012B27BC0810_OFFSET UNITYSDK_OFFSET(0x1874AFC0)
#define RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_AF22D60B0F714418_OFFSET UNITYSDK_OFFSET(0x1874AEF0)
#define RPG_GAMECORE_BYHAVEENEMYALIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1874AF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveEnemyAlive_TypeDefinitionIndex = 21431;

	class ByHaveEnemyAlive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IncludeUnselectable; // 0x28
		::System::Boolean IncludePuppet; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AF22D60B0F714418(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveEnemyAlive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveEnemyAlive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_AF22D60B0F714418_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_816E012B27BC0810(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveEnemyAlive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveEnemyAlive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEENEMYALIVE_METHOD_4_816E012B27BC0810_OFFSET))(a1, a2);
		}
	};
}
