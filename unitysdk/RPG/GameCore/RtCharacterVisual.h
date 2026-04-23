#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMaterialEffectType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterReactionAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTCHARACTERVISUAL_METHOD_2_DD7184153E7829CA_OFFSET UNITYSDK_OFFSET(0x18DCBC70)
#define RPG_GAMECORE_RTCHARACTERVISUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCC620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterVisual_TypeDefinitionIndex = 23084;

	class RtCharacterVisual : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Priority; // 0x10
		::System::String* AnimOccur; // 0x18
		::System::String* AnimLoop; // 0x20
		::System::String* AnimRecover; // 0x28
		::System::Single AnimOccurTransition; // 0x30
		::System::Single AnimLoopTransition; // 0x34
		::System::Single AnimRecoverTransition; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AnimRedirect; // 0x40
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* FlagList; // 0x48
		::RPG::GameCore::FixPoint AnimSpeedFactor; // 0x50
		::System::Single AnimSpeedTransitTime; // 0x58
		::System::Single AnimSpeedTransitTimeRange; // 0x5C
		::System::Single RepeatOccurAnimWhenBeHitNormalizedTime; // 0x60
		::System::Boolean ForecHitH; // 0x64
		::RPG::GameCore::CharacterReactionAnimConfig* ReactionAnims; // 0x68
		::RPG::GameCore::CharacterMaterialEffectType MaterialEffect; // 0x70
		::System::Single MaterialTransitTime; // 0x74
		::System::Single FloatingHeight; // 0x78
		::System::Single FloatingRiseDuration; // 0x7C
		::System::Single FloatingFallDuration; // 0x80
		::System::String* FloatingFailAnimRecover; // 0x88
		::System::Boolean DisableLookAtIK; // 0x90
		::System::Boolean SpecialStandbyForbidVisualState; // 0x91
		::System::Boolean SpecialCharacterForbidVisualState; // 0x92
		::System::Boolean OnlyAffectPlayer; // 0x93
		::System::Boolean IgnoreAnimConfig; // 0x94
		::System::String* EmoAnimName; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERVISUAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DD7184153E7829CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCharacterVisual*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCharacterVisual*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERVISUAL_METHOD_2_DD7184153E7829CA_OFFSET))(a1, a2);
		}
	};
}
