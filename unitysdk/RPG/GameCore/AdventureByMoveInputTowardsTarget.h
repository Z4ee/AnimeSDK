#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_23490D9884442F80_OFFSET UNITYSDK_OFFSET(0x18670CE0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_9436143EBEE9D814_OFFSET UNITYSDK_OFFSET(0x18670DB0)
#define RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18670D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByMoveInputTowardsTarget_TypeDefinitionIndex = 19164;

	class AdventureByMoveInputTowardsTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* ToleranceAngle; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23490D9884442F80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_23490D9884442F80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9436143EBEE9D814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYMOVEINPUTTOWARDSTARGET_METHOD_4_9436143EBEE9D814_OFFSET))(a1, a2);
		}
	};
}
