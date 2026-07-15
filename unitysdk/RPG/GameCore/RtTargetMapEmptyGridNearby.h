#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_1B3D6813F610FBEC_OFFSET UNITYSDK_OFFSET(0x1B76E720)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_8F7983D1B8F6AC95_OFFSET UNITYSDK_OFFSET(0x1B76EB70)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_AFBF36ED30D88222_OFFSET UNITYSDK_OFFSET(0x1B76E860)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_B58D08B8E1F9A5FE_OFFSET UNITYSDK_OFFSET(0x1B76EAC0)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76E7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapEmptyGridNearby_TypeDefinitionIndex = 23400;

	class RtTargetMapEmptyGridNearby : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* IgnoreGridCharacter; // 0x10
		::RPG::GameCore::PredicateConfig* GridFilter; // 0x18
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x20
		::RPG::GameCore::DynamicFloat* Count; // 0x28
		::System::Boolean ByRandom; // 0x30
		::RPG::GameCore::ValueEvaluatorConfig* GridEvaluator; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1B3D6813F610FBEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_1B3D6813F610FBEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AFBF36ED30D88222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_AFBF36ED30D88222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B58D08B8E1F9A5FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_B58D08B8E1F9A5FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F7983D1B8F6AC95(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapEmptyGridNearby* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapEmptyGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_8F7983D1B8F6AC95_OFFSET))(a1, a2);
		}
	};
}
