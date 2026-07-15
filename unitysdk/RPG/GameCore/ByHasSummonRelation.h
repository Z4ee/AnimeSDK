#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_0D2387D6085CABF0_OFFSET UNITYSDK_OFFSET(0x1A8CC1F0)
#define RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_6A083DF8011510FE_OFFSET UNITYSDK_OFFSET(0x1A8CC220)
#define RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_82D256A8486D4B52_OFFSET UNITYSDK_OFFSET(0x1A8CBF90)
#define RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_8C3AE1DAE843B5E3_OFFSET UNITYSDK_OFFSET(0x1A8CBFD0)
#define RPG_GAMECORE_BYHASSUMMONRELATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CBFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSummonRelation_TypeDefinitionIndex = 21742;

	class ByHasSummonRelation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonerType; // 0x20
		::RPG::GameCore::TargetEvaluator* ServantType; // 0x28
		::System::Boolean AllGeneration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_82D256A8486D4B52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSummonRelation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSummonRelation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_82D256A8486D4B52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C3AE1DAE843B5E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_8C3AE1DAE843B5E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D2387D6085CABF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_0D2387D6085CABF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6A083DF8011510FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSummonRelation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSummonRelation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSUMMONRELATION_METHOD_4_6A083DF8011510FE_OFFSET))(a1, a2);
		}
	};
}
