#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CloseupShotProcedureConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERACLOSEUPSHOT_METHOD_2_4B84341E2BD7FF59_OFFSET UNITYSDK_OFFSET(0x1D2B5600)
#define RPG_GAMECORE_VCAMERACLOSEUPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B5D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraCloseupShot_TypeDefinitionIndex = 16241;

	class VCameraCloseupShot : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Boolean Exit; // 0x11
		::System::String* CameraTimelineAssetName; // 0x18
		::RPG::GameCore::DynamicFloat* TimelineStartTime; // 0x20
		::RPG::GameCore::DynamicFloat* TimelineFinishTime; // 0x28
		::System::String* CloseupShotPath; // 0x30
		::RPG::GameCore::TargetEvaluator* TransTypeFollow; // 0x38
		::RPG::MVector3 FollowOffset; // 0x40
		::RPG::GameCore::TargetEvaluator* TransTypeAim; // 0x50
		::RPG::MVector3 AimOffset; // 0x58
		::System::Boolean Override; // 0x64
		::System::Single PauseTime; // 0x68
		::System::Single LightTeamCenterOffset; // 0x6C
		::System::String* LightTeamCustomizeFormationName; // 0x70
		::System::Single DarkTeamCenterOffset; // 0x78
		::System::String* DarkTeamCustomizeFormationName; // 0x80
		::System::Single StageRootOffset; // 0x88
		::System::Boolean KeepLastFrame; // 0x8C
		::System::Boolean HideMonsterEffect; // 0x8D
		::RPG::GameCore::CloseupShotProcedureConfig* ProcedureConfig; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACLOSEUPSHOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4B84341E2BD7FF59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraCloseupShot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraCloseupShot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACLOSEUPSHOT_METHOD_2_4B84341E2BD7FF59_OFFSET))(a1, a2);
		}
	};
}
