#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOSEUPSHOTPROCEDURECONFIG_METHOD_2_35F8BED0A63117EE_OFFSET UNITYSDK_OFFSET(0x1D9A3190)
#define RPG_GAMECORE_CLOSEUPSHOTPROCEDURECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseupShotProcedureConfig_TypeDefinitionIndex = 16240;

	class CloseupShotProcedureConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ApplySkillLogicalCompensation; // 0x10
		::System::Single LogicalCompensationPaymentRatio; // 0x14
		::System::Single LogicalCompensationDuration; // 0x18
		::System::Single PosBlendTime; // 0x1C
		::System::Single RotBlendTime; // 0x20
		::RPG::GameCore::VCameraBlendType PosBlendType; // 0x24
		::System::String* PosBlendCurvePath; // 0x28
		::RPG::GameCore::VCameraBlendType RotBlendType; // 0x30
		::System::String* RotBlendCurvePath; // 0x38
		::System::Single FrameTimelineDrivePosThreshold; // 0x40
		::System::Single FrameTimelineDriveRotThreshold; // 0x44
		::System::Single FrameLogicalDrivePosThreshold; // 0x48
		::System::Boolean ForbidDynamicOffset; // 0x4C
		::System::Boolean AvatarToMonsterOffsetScaleByCameraDistance; // 0x4D
		::System::Single MonsterAnchorOffsetIntensity; // 0x50
		::System::Single MonsterAimOffsetIntensity; // 0x54
		::System::Single AnchorOffsetIntensityBlendTime; // 0x58
		::RPG::GameCore::VCameraBlendType AnchorOffsetIntensityBlendType; // 0x5C
		::System::String* AnchorOffsetIntensityBlendCurvePath; // 0x60
		::System::Boolean UseLightTeamOffsetByTeamWidth; // 0x68
		::System::Boolean UseDarkTeamOffsetByTeamWidth; // 0x69
		::System::Boolean InspectAimVisibleForDynamicOffset; // 0x6A
		::System::Single DynamicOffsetScaleBlendTime; // 0x6C
		::RPG::GameCore::VCameraBlendType DynamicOffsetScaleBlendType; // 0x70
		::System::String* DynamicOffsetScaleBlendCurvePath; // 0x78
		::System::Single TimelineYLimit; // 0x80
		::System::Boolean ApplyResolutionDelta; // 0x84
		::System::Boolean ApplyMonsterDynamicOffset; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEUPSHOTPROCEDURECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35F8BED0A63117EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CloseupShotProcedureConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CloseupShotProcedureConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEUPSHOTPROCEDURECONFIG_METHOD_2_35F8BED0A63117EE_OFFSET))(a1, a2);
		}
	};
}
