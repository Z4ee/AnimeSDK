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

#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_2BF4648671111A7E_OFFSET UNITYSDK_OFFSET(0x183F9E60)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_86E87AB4982311F8_OFFSET UNITYSDK_OFFSET(0x183FA1D0)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_8DC986C041545734_OFFSET UNITYSDK_OFFSET(0x183F9EB0)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_B78DF254F2280415_OFFSET UNITYSDK_OFFSET(0x183FA280)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_BB68B265491E92AD_1_OFFSET UNITYSDK_OFFSET(0x183FA120)
#define RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_BB68B265491E92AD_OFFSET UNITYSDK_OFFSET(0x183FA050)
#define RPG_CLIENT_FIGHTMODULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x183FA350)

namespace RPG::Client
{
	inline static constexpr unsigned int FightModuleConfig_TypeDefinitionIndex = 66545;

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

		::RPG::Client::CameraNamedDynamicOffset* Method_4_8DC986C041545734(::System::String* a1)
		{
			return ((::RPG::Client::CameraNamedDynamicOffset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_8DC986C041545734_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicOffset* Method_4_BB68B265491E92AD(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_BB68B265491E92AD_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicOffset* Method_4_BB68B265491E92AD_1(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_BB68B265491E92AD_1_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicAnchorOffset* Method_4_86E87AB4982311F8(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicAnchorOffset*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_86E87AB4982311F8_OFFSET))(this, a1);
		}

		::RPG::Client::CameraSomatoDynamicOffsetScale* Method_4_B78DF254F2280415(::RPG::GameCore::CharacterSomatoType a1)
		{
			return ((::RPG::Client::CameraSomatoDynamicOffsetScale*(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTMODULECONFIG_METHOD_4_B78DF254F2280415_OFFSET))(this, a1);
		}
	};
}
