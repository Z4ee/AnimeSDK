#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEffectItem; }

#define RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG_METHOD_2_941D29298E462398_OFFSET UNITYSDK_OFFSET(0x1D0F8A90)
#define RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerEffectConfig_TypeDefinitionIndex = 16488;

	class FiveDimPlayerEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* InvulnerableEffects; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* JumpEnergyEffects; // 0x18
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* GroundJumpEffect; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AirJumpEffect; // 0x28
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* SkillUpgradeEffects; // 0x30
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DirectionDissolveEffects; // 0x38
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* TeleportFadeOutEffects; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* TeleportFadeInEffects; // 0x48
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AvatarInvincibleEffects; // 0x50
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AvatarDeadEffects; // 0x58
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* AvatarResetEffects; // 0x60
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* RunSmokeEffects; // 0x68
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* RunBrakeEffects; // 0x70
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashTrailEffects; // 0x78
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashTrailEffects; // 0x80
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashAimEffects; // 0x88
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashAimEffects; // 0x90
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashAimNoArrowEffects; // 0x98
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashAimNoArrowEffects; // 0xA0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* DashAvatarEffects; // 0xA8
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* UpgradedDashAvatarEffects; // 0xB0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MascotEffects; // 0xB8
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MusicFallEffects; // 0xC0
		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* MascotMusicFallEffects; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_941D29298E462398(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYEREFFECTCONFIG_METHOD_2_941D29298E462398_OFFSET))(a1, a2);
		}
	};
}
