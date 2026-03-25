#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleConfigBase.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"

namespace RPG::Client { class CameraDynamicOffset; }
namespace RPG::Client { class CameraFightStateCastAnimationConfig; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraFightStateCommonConfig; }
namespace RPG::Client { class CameraFightStateDarkAttackConfig; }
namespace RPG::Client { class CameraFightStateOrbitCruiseConfig; }
namespace RPG::Client { class CameraFightStateSelectDarkTeamEntityConfig; }
namespace RPG::Client { class CameraFightStateSelectDarkTeamSelfEntityConfig; }
namespace RPG::Client { class CameraFightStateSelectLightTeamEntityConfig; }
namespace RPG::Client { class CameraFightStateSelectServantConfig; }
namespace RPG::Client { class CameraNamedDynamicOffset; }
namespace RPG::Client { class CameraSomatoDynamicAnchorOffset; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CameraSomatoDynamicOffsetScale; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0x96C2CD0)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_784C365191F44510_OFFSET UNITYSDK_OFFSET(0x96C2D20)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_79AE970A73AFECF0_OFFSET UNITYSDK_OFFSET(0x96C3060)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_A82AC245E72319C5_OFFSET UNITYSDK_OFFSET(0x96C2FC0)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_F0C0658013F336D8_1_OFFSET UNITYSDK_OFFSET(0x96C2F20)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_F0C0658013F336D8_OFFSET UNITYSDK_OFFSET(0x96C2E80)
#define RPG_CLIENT_FIGHTMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x96C3100)

namespace RPG::Client
{
	inline static constexpr unsigned int FightModuleConfig_TypeDefinitionIndex = 56968;

	class FightModuleConfig : public ::RPG::Client::CameraModuleConfigBase
	{
	public:
		::System::Single MeleeSelectDarkAimLerpRatioLeft; // 0x18
		::System::Single MeleeSelectDarkAimLerpRatioRight; // 0x1C
		::System::Single RangeSelectDarkAimLerpRatioLeft; // 0x20
		::System::Single RangeSelectDarkAimLerpRatioRight; // 0x24
		::RPG::Client::CameraDynamicOffset* DynamicOffsetConfig; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::CameraSomatoDynamicOffset*>* DynamicOffsetBySomatoTypeConfigList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::CameraSomatoDynamicOffsetScale*>* DynamicOffsetScaleBySomatoTypeConfigList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::CameraNamedDynamicOffset*>* DynamicOffsetByNameConfigList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CameraSomatoDynamicOffset*>* LightTeamDynamicOffsetBySomatoTypeConfigList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::CameraSomatoDynamicAnchorOffset*>* LightTeamDynamicOffsetBySomatoTypeForSelectLightTeamConfigList; // 0x50
		::RPG::Client::CameraFightStateSelectLightTeamEntityConfig* SelectLightTeamEntityConfig; // 0x58
		::RPG::Client::CameraFightStateSelectDarkTeamSelfEntityConfig* SelectDarkTeamSelfEntityConfig; // 0x60
		::RPG::Client::CameraFightStateSelectDarkTeamEntityConfig* SelectDarkTeamEntityConfig; // 0x68
		::RPG::Client::CameraFightStateCastAnimationConfig* CastAnimationConfig; // 0x70
		::RPG::Client::CameraFightStateCommonConfig* UseSkillPerformConfig; // 0x78
		::RPG::Client::CameraFightStateCommonConfig* LightEntityAttack_MeleeConfig; // 0x80
		::RPG::Client::CameraFightStateCommonConfig* LightEntityAttack_RangeConfig; // 0x88
		::RPG::Client::CameraFightStateDarkAttackConfig* DarkEntityAttack_MeleeConfig; // 0x90
		::RPG::Client::CameraFightStateDarkAttackConfig* DarkEntityAttack_RangeConfig; // 0x98
		::RPG::Client::CameraFightStateCasterToTargetConfig* CasterToTargetConfig; // 0xA0
		::RPG::Client::CameraFightStateCommonConfig* CameraToTargetPerformConfig; // 0xA8
		::RPG::Client::CameraFightStateCommonConfig* FollowActiveEntityConfig; // 0xB0
		::RPG::Client::CameraFightStateCommonConfig* CameraMotionConfig; // 0xB8
		::RPG::Client::CameraFightStateCommonConfig* LightTeamDollyConfig; // 0xC0
		::RPG::Client::CameraFightStateCommonConfig* LastCloseupShotEndConfig; // 0xC8
		::RPG::Client::CameraFightStateSelectServantConfig* SelectServantConfig; // 0xD0
		::RPG::Client::CameraFightStateOrbitCruiseConfig* OrbitCruiseConfig; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleType Method_4_2BF4648671111A7E()
		{
			return ((::RPG::Client::CameraModuleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET))(this);
		}

		::RPG::Client::CameraNamedDynamicOffset* Method_4_784C365191F44510(::System::String* a1)
		{
			return ((::RPG::Client::CameraNamedDynamicOffset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_784C365191F44510_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicOffset* Method_4_F0C0658013F336D8(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_F0C0658013F336D8_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicOffset* Method_4_F0C0658013F336D8_1(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_F0C0658013F336D8_1_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicAnchorOffset* Method_4_A82AC245E72319C5(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicAnchorOffset*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_A82AC245E72319C5_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicOffsetScale* Method_4_79AE970A73AFECF0(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffsetScale*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_79AE970A73AFECF0_OFFSET))(this, a1);
		}
	};
}
