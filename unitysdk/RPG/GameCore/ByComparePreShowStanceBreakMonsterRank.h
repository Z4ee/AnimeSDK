#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_6071D9B04125B7CE_OFFSET UNITYSDK_OFFSET(0x19CFDCB0)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_769D019433964F25_OFFSET UNITYSDK_OFFSET(0x19CFDF40)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_C2ECAAFB874668B3_OFFSET UNITYSDK_OFFSET(0x19CFDCF0)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_FC66564EF46F1C2B_OFFSET UNITYSDK_OFFSET(0x19CFDF70)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFDCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePreShowStanceBreakMonsterRank_TypeDefinitionIndex = 22698;

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

		static ::System::Void Method_4_6071D9B04125B7CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_6071D9B04125B7CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C2ECAAFB874668B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_C2ECAAFB874668B3_OFFSET))(a1, a2);
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
