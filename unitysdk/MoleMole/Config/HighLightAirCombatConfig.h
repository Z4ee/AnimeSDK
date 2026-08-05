#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace MoleMole::Config { class ConfigBossAirCombatParryAttack; }
namespace MoleMole::Config { class HighLightAirCombatMonsters; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACE420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HighLightAirCombatConfig_TypeDefinitionIndex = 77782;

	class HighLightAirCombatConfig : public ::System::Object
	{
	public:
		::System::String* prefabPath; // 0x10
		::System::String* cameraKey; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* cameraAnimators; // 0x20
		::System::String* avatarFollow; // 0x28
		::System::Int32 avatarID; // 0x30
		::System::String* bossFollow; // 0x38
		::System::Int32 bossTemplateID; // 0x40
		::System::Int32 bossLevel; // 0x44
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HighLightAirCombatMonsters*>* monsterGroups; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* avatarAirCombatAbility; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* bossAirCombatAbility; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigBossAirCombatParryAttack*>* parryAttackConfigs; // 0x60
		::MoleMole::AniamtorParamsSetting* avatarParryBtnAttackAnimParams; // 0x68
		::MoleMole::AniamtorParamsSetting* avatarParryAttackAnimParams; // 0x70
		::System::String* ParryFrameEndCustomEvent; // 0x78
		::System::String* EnableCrossHairKey; // 0x80
		::System::String* EnterSpecialAirCombatSightsKey; // 0x88
		::System::String* AirCombatSightsProcessKey; // 0x90
		::System::String* AirCombatSightsMaxProcessKey; // 0x98
		::System::String* CrosshairAttackPointName; // 0xA0
		::System::Single AutoLockCancelRange; // 0xA8
		::System::Single AvatarVelocityDuration; // 0xAC
		::System::String* AvatarRootAttachPoint; // 0xB0
		::System::Boolean EnableSweepTrigger; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HIGHLIGHTAIRCOMBATCONFIG__CTOR_OFFSET))(this);
		}
	};
}
