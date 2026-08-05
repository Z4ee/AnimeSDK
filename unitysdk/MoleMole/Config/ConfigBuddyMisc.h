#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Config { class BuddyOutlineConfig; }
namespace MoleMole::Config { class ConfigAvatarGround; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A7730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuddyMisc_TypeDefinitionIndex = 57714;

	class ConfigBuddyMisc : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour>* behaviourConfigs; // 0x58
		::System::String* buddyAidSkillStartCustomEvent; // 0x60
		::System::String* buddyAidSkillEndSwitchOutCustomEvent; // 0x68
		::System::Single buddyGroundFallHeight; // 0x70
		::System::Single buddyStairFallHeight; // 0x74
		::System::Single fallRadiusDelta; // 0x78
		::System::Single radiusDelta; // 0x7C
		::MoleMole::Config::ConfigAvatarGround* shellBuddyConfigAvatarGround; // 0x80
		::System::Single CheckFallSphereRadius; // 0x88
		::System::Single CheckFallHeight; // 0x8C
		::System::Single CheckFallDuration; // 0x90
		::MoleMole::Battle::AnimatorParamControl* FallAnimatorParam; // 0x98
		::MoleMole::Battle::AnimatorParamControl* GroundAnimatorParam; // 0xA0
		::MoleMole::Battle::AnimatorParamControl* SlipAnimatorParam; // 0xA8
		::System::Single SlipAngleThreshold; // 0xB0
		::System::Single SlipMaxSpeed; // 0xB4
		::System::Single SlipAcc; // 0xB8
		::System::Single extraOutDis; // 0xBC
		::System::Single detectMaxY; // 0xC0
		::System::Int32 PartyGameBuddyId; // 0xC4
		::MoleMole::Config::BuddyOutlineConfig* buddyOutlineConfig; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC__CTOR_OFFSET))(this);
		}
	};
}
