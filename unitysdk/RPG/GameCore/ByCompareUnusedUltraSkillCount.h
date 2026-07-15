#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_18E76DA5A8A53EDE_OFFSET UNITYSDK_OFFSET(0x1A8B21A0)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_591A7AA2A43D6CD0_OFFSET UNITYSDK_OFFSET(0x1A8B2170)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_598F7421234C0481_OFFSET UNITYSDK_OFFSET(0x1A8B1EA0)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_7C659619090240F0_OFFSET UNITYSDK_OFFSET(0x1A8B1EE0)
#define RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B1ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareUnusedUltraSkillCount_TypeDefinitionIndex = 22225;

	class ByCompareUnusedUltraSkillCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillOwnerType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Boolean IncludeInsertAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_598F7421234C0481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_598F7421234C0481_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C659619090240F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_7C659619090240F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_591A7AA2A43D6CD0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_591A7AA2A43D6CD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18E76DA5A8A53EDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREUNUSEDULTRASKILLCOUNT_METHOD_4_18E76DA5A8A53EDE_OFFSET))(a1, a2);
		}
	};
}
