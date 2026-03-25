#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraAttackType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERANORMALCONFIG_METHOD_2_52AC5AE5ED4C7F07_OFFSET UNITYSDK_OFFSET(0x178EA2E0)
#define RPG_GAMECORE_VCAMERANORMALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178EE020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraNormalConfig_TypeDefinitionIndex = 15017;

	class VCameraNormalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::GameCore::VCameraState CameraState; // 0x14
		::System::String* TemplateName; // 0x18
		::RPG::GameCore::VCameraAttackType AttackType; // 0x20
		::RPG::GameCore::TargetEvaluator* AnchorTargetType; // 0x28
		::System::Boolean IsLocalOffset; // 0x30
		::System::Boolean UseLightTeamOffsetByTeamWidth; // 0x31
		::System::Boolean UseDarkTeamOffsetByTeamWidth; // 0x32
		::RPG::MVector3 AnchorOffset; // 0x34
		::System::Single AnchorRatio; // 0x40
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x48
		::RPG::MVector3 AimOffset; // 0x50
		::System::Single AimRatio; // 0x5C
		::System::Single FollowPoleAngle; // 0x60
		::System::Single FollowElevationAngle; // 0x64
		::System::Single FollowRadius; // 0x68
		::System::Single AnchorToAimAngle; // 0x6C
		::System::Single FollowDamp; // 0x70
		::System::Single AimDamp; // 0x74
		::System::Single Dutch; // 0x78
		::System::Single FOV; // 0x7C
		::System::Single MoveForwardDis; // 0x80
		::System::Single NearClipping; // 0x84
		::System::Boolean ForbidDynamicOffset; // 0x88
		::System::Boolean NeedCutBlending; // 0x89
		::System::Boolean ResetToDefault; // 0x8A
		::System::Boolean ForbidChangeOffset; // 0x8B
		::System::Boolean CalTargetPositionWhenPlay; // 0x8C
		::System::Boolean AvatarToMonsterOffsetScaleByCameraDistance; // 0x8D
		::System::Boolean UseSkillPerformIgnoreDynamicOffset; // 0x8E
		::System::Boolean UseSkillPerformEnableCommonTeamWidthOffset; // 0x8F
		::System::Boolean UseAimTargetToCameraFocus; // 0x90
		::System::String* BattleFinishFallbackPerform; // 0x98
		::System::Boolean UseSkillPerformIgnoreDynamicOffsetAtUltraDistance; // 0xA0
		::System::Boolean EnableDampAtUltraDistance; // 0xA1
		::System::Single DampTimeAtUltraDistance; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANORMALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_52AC5AE5ED4C7F07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraNormalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraNormalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANORMALCONFIG_METHOD_2_52AC5AE5ED4C7F07_OFFSET))(a1, a2);
		}
	};
}
