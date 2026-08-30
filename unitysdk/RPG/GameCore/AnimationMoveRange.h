#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MoveOffsetCoordType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATIONMOVERANGE_METHOD_2_E2D535E84611179A_OFFSET UNITYSDK_OFFSET(0x1CE1D770)
#define RPG_GAMECORE_ANIMATIONMOVERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1DF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimationMoveRange_TypeDefinitionIndex = 22213;

	class AnimationMoveRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::String* TargetAttachPointName; // 0x18
		::System::Boolean IsBehindTarget; // 0x20
		::System::Boolean IgnoreRadius; // 0x21
		::System::Boolean ApplyTargetPosY; // 0x22
		::RPG::GameCore::DynamicFloat* Speed; // 0x28
		::RPG::GameCore::DynamicFloat* NormalizedExitTime; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetTargetDistance; // 0x38
		::RPG::GameCore::MoveOffsetCoordType OffsetCoord; // 0x40
		::RPG::GameCore::DynamicFloat* OffsetForward; // 0x48
		::RPG::GameCore::DynamicFloat* OffsetHorizontal; // 0x50
		::RPG::GameCore::DynamicFloat* OffsetVertical; // 0x58
		::RPG::GameCore::DynamicFloat* NormalizedTimeStart; // 0x60
		::RPG::GameCore::DynamicFloat* NormalizedTimeEnd; // 0x68
		::RPG::GameCore::DynamicFloat* MovePercentage; // 0x70
		::RPG::GameCore::DynamicFloat* DefaultMoveDistance; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONMOVERANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E2D535E84611179A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimationMoveRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimationMoveRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATIONMOVERANGE_METHOD_2_E2D535E84611179A_OFFSET))(a1, a2);
		}
	};
}
