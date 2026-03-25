#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_25566DF9AB79204F_OFFSET UNITYSDK_OFFSET(0x17012480)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_34515B86DEB1E43D_OFFSET UNITYSDK_OFFSET(0x170123B0)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x17012430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePreShowStanceBreakMonsterRank_TypeDefinitionIndex = 21771;

	class ByComparePreShowStanceBreakMonsterRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::UInt32 CompareValue; // 0x2C
		::RPG::GameCore::PreShowStanceCheckType CheckType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34515B86DEB1E43D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_34515B86DEB1E43D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25566DF9AB79204F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_25566DF9AB79204F_OFFSET))(a1, a2);
		}
	};
}
