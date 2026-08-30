#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE_METHOD_2_9BBC4D2465CED7B2_OFFSET UNITYSDK_OFFSET(0x1CBA79B0)
#define RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA7F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAnimationMoveRange_TypeDefinitionIndex = 19945;

	class AdventureAnimationMoveRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::Boolean IgnoreRadius; // 0x18
		::RPG::GameCore::DynamicFloat* OffsetTargetDistance; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x30
		::RPG::GameCore::DynamicFloat* MovePercentage; // 0x38
		::RPG::GameCore::DynamicFloat* DefaultMoveDistance; // 0x40
		::RPG::GameCore::DynamicFloat* MaxMoveDistance; // 0x48
		::System::Boolean OnlyMoveForward; // 0x50
		::RPG::GameCore::DynamicFloat* MaxSpeed; // 0x58
		::RPG::GameCore::DynamicFloat* SteerNormalizedTimeStart; // 0x60
		::RPG::GameCore::DynamicFloat* SteerNormalizedTimeEnd; // 0x68
		::RPG::GameCore::DynamicFloat* MaxSteerSpeed; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9BBC4D2465CED7B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAnimationMoveRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAnimationMoveRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREANIMATIONMOVERANGE_METHOD_2_9BBC4D2465CED7B2_OFFSET))(a1, a2);
		}
	};
}
