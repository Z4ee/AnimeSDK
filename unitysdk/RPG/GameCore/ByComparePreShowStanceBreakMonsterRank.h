#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_2EC61FF84E036CCE_OFFSET UNITYSDK_OFFSET(0x195273E0)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_34515B86DEB1E43D_OFFSET UNITYSDK_OFFSET(0x19527040)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_926E8E0A264027E1_OFFSET UNITYSDK_OFFSET(0x19527360)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_C2ECAAFB874668B3_OFFSET UNITYSDK_OFFSET(0x19527110)
#define RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK__CTOR_OFFSET UNITYSDK_OFFSET(0x195270C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePreShowStanceBreakMonsterRank_TypeDefinitionIndex = 22257;

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

		static ::System::Void Method_4_C2ECAAFB874668B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_C2ECAAFB874668B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_926E8E0A264027E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_926E8E0A264027E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2EC61FF84E036CCE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePreShowStanceBreakMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPRESHOWSTANCEBREAKMONSTERRANK_METHOD_4_2EC61FF84E036CCE_OFFSET))(a1, a2);
		}
	};
}
