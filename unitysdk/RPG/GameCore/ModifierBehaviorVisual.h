#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimCategory.h"
#include "unitysdk/RPG/GameCore/CharacterMaterialEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterReactionAnimConfig; }
namespace RPG::GameCore { class HitMotionParams; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_GET_HASLOOPANIM_OFFSET UNITYSDK_OFFSET(0x17426E20)
#define RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_GET_HASOCCURANIM_OFFSET UNITYSDK_OFFSET(0x17426E40)
#define RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_GET_HASRECOVERANIM_OFFSET UNITYSDK_OFFSET(0x17426E60)
#define RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_METHOD_2_D45237155D85F493_OFFSET UNITYSDK_OFFSET(0x17426570)
#define RPG_GAMECORE_MODIFIERBEHAVIORVISUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17426DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorVisual_TypeDefinitionIndex = 16700;

	class ModifierBehaviorVisual : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x10
		::System::String* ModifierBehaviorVisualPriority; // 0x18
		::System::String* AnimOccur; // 0x20
		::System::String* AnimLoop; // 0x28
		::System::String* AnimRecover; // 0x30
		::System::Single AnimOccurTransition; // 0x38
		::System::Single AnimLoopTransition; // 0x3C
		::System::Single AnimRecoverTransition; // 0x40
		::System::Single AnimSpeedFactor; // 0x44
		::System::Single AnimSpeedTransitTime; // 0x48
		::System::Single AnimSpeedTransitTimeRange; // 0x4C
		::System::Single RepeatOccurAnimWhenBeHitNormalizedTime; // 0x50
		::System::Boolean ForecHitH; // 0x54
		::RPG::GameCore::CharacterReactionAnimConfig* ReactionAnims; // 0x58
		::RPG::GameCore::CharacterMaterialEffectType MaterialEffect; // 0x60
		::System::Single MaterialTransitTime; // 0x64
		::System::Single FloatingHeight; // 0x68
		::System::Single FloatingRiseDuration; // 0x6C
		::System::Single FloatingFallDuration; // 0x70
		::System::String* FloatingFailAnimRecover; // 0x78
		::System::Boolean DisableLookAtIK; // 0x80
		::System::Boolean SpecialStandbyForbidVisualState; // 0x81
		::System::Boolean SpecialCharacterForbidVisualState; // 0x82
		::System::Boolean OnlyAffectPlayer; // 0x83
		::System::Boolean IgnoreAnimConfig; // 0x84
		::System::String* EmoAnimName; // 0x88
		::RPG::GameCore::AnimCategory AnimLoopCat; // 0x90
		::RPG::GameCore::AnimCategory AnimOccurCat; // 0x91
		::RPG::GameCore::AnimCategory AnimRecoverCat; // 0x92
		::System::Int32 AnimLoopHash; // 0x94
		::System::Int32 AnimOccurHash; // 0x98
		::System::Int32 AnimRecoverHash; // 0x9C
		::System::Int32 FloatingFailAnimRecoverHash; // 0xA0
		::System::Int32 EmoAnimHash; // 0xA4
		::RPG::GameCore::HitMotionParams* FloatingParams; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORVISUAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D45237155D85F493(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBehaviorVisual*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBehaviorVisual*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_METHOD_2_D45237155D85F493_OFFSET))(a1, a2);
		}

		::System::Boolean get_HasLoopAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_GET_HASLOOPANIM_OFFSET))(this);
		}

		::System::Boolean get_HasOccurAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_GET_HASOCCURANIM_OFFSET))(this);
		}

		::System::Boolean get_HasRecoverAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORVISUAL_GET_HASRECOVERANIM_OFFSET))(this);
		}
	};
}
