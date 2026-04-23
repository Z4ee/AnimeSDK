#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArmorTypeEnum.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/WeaponTypeEnum.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class RtCharacterMotionParam; }
namespace RPG::GameCore { class RtSkillConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTCHARACTERCONFIG_METHOD_2_0174F93AC43CEA4D_OFFSET UNITYSDK_OFFSET(0x18DCA400)
#define RPG_GAMECORE_RTCHARACTERCONFIG_METHOD_2_70FACFFEE942B2B5_OFFSET UNITYSDK_OFFSET(0x18DCA0D0)
#define RPG_GAMECORE_RTCHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC3ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterConfig_TypeDefinitionIndex = 16756;

	class RtCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsHero; // 0x10
		::Il2CppArray<::System::String*>* Tags; // 0x18
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* DefaultFlags; // 0x20
		::RPG::MVector3 CharacterHUDOffset; // 0x28
		::RPG::MVector3 BuffPanelOffset; // 0x34
		::Il2CppArray<::System::String*>* HideWeaponList; // 0x40
		::RPG::MVector3 HitBoxOffset; // 0x48
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x54
		::System::Single HitBoxWidth; // 0x58
		::System::Single HitBoxLength; // 0x5C
		::System::Single HitBoxHeight; // 0x60
		::System::String* HitBoxAttachPoint; // 0x68
		::System::Single VisualRadius; // 0x70
		::RPG::GameCore::ResilienceEnum Resilience; // 0x74
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x78
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x80
		::Il2CppArray<::RPG::GameCore::RtSkillConfig*>* SkillList; // 0x88
		::Il2CppArray<::System::String*>* AbilityList; // 0x90
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0x98
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CustomValues; // 0xA8
		::RPG::GameCore::WeaponTypeEnum WeaponType; // 0xB0
		::RPG::GameCore::ArmorTypeEnum ArmorType; // 0xB4
		::Il2CppArray<::RPG::GameCore::SkillTransitAnimConfig*>* SkillReadyTransits; // 0xB8
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0xC0
		::System::String* CharacterReplaceMaterialConfigPath; // 0xC8
		::System::String* CommonAnimZoneConfigPath; // 0xD0
		::System::String* AnimZoneConfigPath; // 0xD8
		::RPG::GameCore::AvatarBaseType AvatarType; // 0xE0
		::RPG::GameCore::AttackDamageType DamageType; // 0xE4
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* Weakness; // 0xE8
		::RPG::GameCore::RtCharacterMotionParam* MotionParam; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* AnimDurationMap; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_70FACFFEE942B2B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERCONFIG_METHOD_2_70FACFFEE942B2B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0174F93AC43CEA4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCharacterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCHARACTERCONFIG_METHOD_2_0174F93AC43CEA4D_OFFSET))(a1, a2);
		}
	};
}
