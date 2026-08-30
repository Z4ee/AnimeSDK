#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_25566DF9AB79204F_OFFSET UNITYSDK_OFFSET(0x1BBAE7A0)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_769D019433964F25_OFFSET UNITYSDK_OFFSET(0x1BBAEA20)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_FC66564EF46F1C2B_OFFSET UNITYSDK_OFFSET(0x1BBAEA50)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_FCCBB0196A718852_OFFSET UNITYSDK_OFFSET(0x1BBAE760)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBAE790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePreShowStanceBreakMonsterRank_TypeDefinitionIndex = 23275;

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

		static ::System::Void Method_4_FCCBB0196A718852(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_FCCBB0196A718852_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25566DF9AB79204F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_25566DF9AB79204F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_769D019433964F25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_769D019433964F25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC66564EF46F1C2B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_FC66564EF46F1C2B_OFFSET))(a1, a2);
		}
	};
}
