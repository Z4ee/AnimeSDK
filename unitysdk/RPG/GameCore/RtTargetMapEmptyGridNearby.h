#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_1B3D6813F610FBEC_OFFSET UNITYSDK_OFFSET(0x18DDA340)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY_METHOD_3_AFBF36ED30D88222_OFFSET UNITYSDK_OFFSET(0x18DDA4C0)
#define RPG_GAMECORE_RTTARGETMAPEMPTYGRIDNEARBY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDA410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapEmptyGridNearby_TypeDefinitionIndex = 23265;

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
	};
}
