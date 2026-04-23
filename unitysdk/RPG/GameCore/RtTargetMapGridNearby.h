#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_042D5DB799A8EACD_OFFSET UNITYSDK_OFFSET(0x18DDA910)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_DA84216489C95BD9_OFFSET UNITYSDK_OFFSET(0x18DDAAC0)
#define RPG_GAMECORE_RTTARGETMAPGRIDNEARBY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDAA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapGridNearby_TypeDefinitionIndex = 23264;

	class RtTargetMapGridNearby : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::PredicateConfig* GridFilter; // 0x10
		::RPG::GameCore::DynamicFloat* MaxDistance; // 0x18
		::RPG::GameCore::DynamicFloat* Count; // 0x20
		::System::Boolean ByRandom; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* GridEvaluator; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_042D5DB799A8EACD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapGridNearby*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapGridNearby*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_042D5DB799A8EACD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA84216489C95BD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapGridNearby* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapGridNearby*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDNEARBY_METHOD_3_DA84216489C95BD9_OFFSET))(a1, a2);
		}
	};
}
