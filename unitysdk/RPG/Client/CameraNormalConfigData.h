#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraAttackType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraNormalConfig; }
namespace System { class String; }

#define RPG_CLIENT_CAMERANORMALCONFIGDATA_ADDFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x9F18FF0)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA_ADDFROMDATA_OFFSET UNITYSDK_OFFSET(0x9F1F460)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA_COPYFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x9F187B0)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA_COPYFROMOTHEREXCLUDEINVALID_OFFSET UNITYSDK_OFFSET(0x9F18910)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA_GET_ISMELEEATTACK_OFFSET UNITYSDK_OFFSET(0x9F1F5B0)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA_RESETTARGETENTITIES_OFFSET UNITYSDK_OFFSET(0x9F19160)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA_SETFOLLOWANGLETOFOLLOWSPHERICALPOS_OFFSET UNITYSDK_OFFSET(0x9F1F550)
#define RPG_CLIENT_CAMERANORMALCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F16F00)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraNormalConfigData_TypeDefinitionIndex = 64111;

	class CameraNormalConfigData : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraState CameraState; // 0x10
		::RPG::GameCore::VCameraAttackType AttackType; // 0x14
		::System::Boolean IsLocalOffset; // 0x18
		::System::Boolean UseLightTeamOffsetByTeamWidth; // 0x19
		::System::Boolean UseDarkTeamOffsetByTeamWidth; // 0x1A
		::UnityEngine::Vector3 AnchorOffset; // 0x1C
		::System::Single AnchorRatio; // 0x28
		::UnityEngine::Vector3 AimOffset; // 0x2C
		::System::Single AimRatio; // 0x38
		::System::Single FollowPoleAngle; // 0x3C
		::System::Single FollowElevationAngle; // 0x40
		::System::Single FollowRadius; // 0x44
		::System::Single AnchorToAimAngle; // 0x48
		::System::Single FollowDamp; // 0x4C
		::System::Single AimDamp; // 0x50
		::System::Nullable_1<::System::Single> AimDampY; // 0x54
		::System::Single Dutch; // 0x5C
		::System::Single FOV; // 0x60
		::System::Single NearClipping; // 0x64
		::System::Single MoveForwardDis; // 0x68
		::System::Boolean ForbidDynamicFloat; // 0x6C
		::System::Boolean NeedCutBlending; // 0x6D
		::System::Boolean ForbidChangeOffset; // 0x6E
		::System::Boolean AvatarToMonsterOffsetScaleByCameraDistance; // 0x6F
		::System::Boolean UseSkillPerformIgnoreDynamicOffset; // 0x70
		::System::Boolean UseSkillPerformIgnoreDynamicOffsetAtUltraDistance; // 0x71
		::System::Boolean EnableDampAtUltraDistance; // 0x72
		::System::Single DampTimeAtUltraDistance; // 0x74
		::System::Boolean UseSkillPerformEnableCommonTeamWidthOffset; // 0x78
		::System::String* BattleFinishFallbackPerform; // 0x80
		::System::Single FollowDampZ; // 0x88
		::System::Boolean ResetToDefault; // 0x8C
		::RPG::GameCore::GameEntity* AnchorTargetEntity; // 0x90
		::RPG::GameCore::GameEntityList* AnchorTargetEntityList; // 0x98
		::System::Nullable_1<::UnityEngine::Vector3> AnchorTargetPos; // 0xA0
		::RPG::GameCore::GameEntity* AimTargetEntity; // 0xB0
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0xB8
		::System::Nullable_1<::UnityEngine::Vector3> AimTargetPos; // 0xC0
		::UnityEngine::Vector3 AnchorPos; // 0xD0
		::UnityEngine::Vector3 FollowSpericalPos; // 0xDC
		::UnityEngine::Vector3 AimPos; // 0xE8
		::System::Single DollyPosition; // 0xF4
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0xF8
		::RPG::GameCore::TargetEvaluator* AnchorTargetType; // 0x100
		::System::Boolean ShotCutAlways; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyFromConfig(::RPG::GameCore::VCameraNormalConfig* pVCameraNormalConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNormalConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_COPYFROMCONFIG_OFFSET))(this, pVCameraNormalConfig);
		}

		::System::Void AddFromConfig(::RPG::GameCore::VCameraNormalConfig* pVCameraNormalConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNormalConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_ADDFROMCONFIG_OFFSET))(this, pVCameraNormalConfig);
		}

		::System::Void AddFromData(::RPG::Client::CameraNormalConfigData* pVCameraNormalConfigData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_ADDFROMDATA_OFFSET))(this, pVCameraNormalConfigData);
		}

		::System::Void SetFollowAngleToFollowSphericalPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_SETFOLLOWANGLETOFOLLOWSPHERICALPOS_OFFSET))(this);
		}

		::System::Void ResetTargetEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_RESETTARGETENTITIES_OFFSET))(this);
		}

		::System::Void CopyFromOtherExcludeInvalid(::RPG::Client::CameraNormalConfigData* pOther, ::RPG::Client::CameraNormalConfigData* pDefault)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraNormalConfigData*, ::RPG::Client::CameraNormalConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_COPYFROMOTHEREXCLUDEINVALID_OFFSET))(this, pOther, pDefault);
		}

		::System::Boolean get_IsMeleeAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERANORMALCONFIGDATA_GET_ISMELEEATTACK_OFFSET))(this);
		}
	};
}
