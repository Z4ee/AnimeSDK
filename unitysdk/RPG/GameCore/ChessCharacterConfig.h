#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArmorTypeEnum.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WeaponTypeEnum.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterCameraConfig; }
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class ChessSkillConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHESSCHARACTERCONFIG_METHOD_2_A425762FF85FE7A8_OFFSET UNITYSDK_OFFSET(0x1708B5B0)
#define RPG_GAMECORE_CHESSCHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1708BEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessCharacterConfig_TypeDefinitionIndex = 16181;

	class ChessCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint DieTime; // 0x10
		::Il2CppArray<::System::String*>* HideWeaponList; // 0x18
		::RPG::MVector3 HitBoxOffset; // 0x20
		::Il2CppArray<::RPG::GameCore::CharacterCameraConfig*>* CameraConfigList; // 0x30
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x38
		::System::Single HitBoxWidth; // 0x3C
		::System::Single HitBoxLength; // 0x40
		::System::Single HitBoxHeight; // 0x44
		::System::String* HitBoxAttachPoint; // 0x48
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x50
		::Il2CppArray<::RPG::GameCore::ChessSkillConfig*>* SkillList; // 0x58
		::Il2CppArray<::System::String*>* AbilityList; // 0x60
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0x68
		::Class_1_2CAAA2FDF9170110* DynamicValues; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CustomValues; // 0x78
		::RPG::GameCore::WeaponTypeEnum WeaponType; // 0x80
		::RPG::GameCore::ArmorTypeEnum ArmorType; // 0x84
		::Il2CppArray<::RPG::GameCore::SkillTransitAnimConfig*>* SkillReadyTransits; // 0x88
		::RPG::GameCore::CharacterPhaseAnimConfig* PhaseAnimConfig; // 0x90
		::System::String* CommonAnimZoneConfigPath; // 0x98
		::System::String* AnimZoneConfigPath; // 0xA0
		::RPG::GameCore::AvatarBaseType AvatarType; // 0xA8
		::RPG::GameCore::AttackDamageType DamageType; // 0xAC
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* Weakness; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSCHARACTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A425762FF85FE7A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessCharacterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessCharacterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSCHARACTERCONFIG_METHOD_2_A425762FF85FE7A8_OFFSET))(a1, a2);
		}
	};
}
