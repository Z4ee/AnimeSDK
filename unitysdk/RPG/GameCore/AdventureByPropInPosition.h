#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_METHOD_4_EEFC65201823F2D1_OFFSET UNITYSDK_OFFSET(0x18671770)
#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_METHOD_4_F038CCDB5A5B3FDB_OFFSET UNITYSDK_OFFSET(0x18671690)
#define RPG_GAMECORE_ADVENTUREBYPROPINPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18671710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPropInPosition_TypeDefinitionIndex = 19762;

	class AdventureByPropInPosition : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGroupID; // 0x20
		::System::UInt32 TargetGroupPropID; // 0x24
		::System::Boolean SourceIsOwner; // 0x28
		::RPG::GameCore::DynamicString* AreaName; // 0x30
		::RPG::GameCore::DynamicString* AnchorName; // 0x38
		::System::Boolean IgnoreYAsix; // 0x40
		::System::Single Range; // 0x44
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F038CCDB5A5B3FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPropInPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPropInPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_METHOD_4_F038CCDB5A5B3FDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEFC65201823F2D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPINPOSITION_METHOD_4_EEFC65201823F2D1_OFFSET))(a1, a2);
		}
	};
}
