#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowTargetType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_FollowMode.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_93C60D7E85A35949;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_264316AD54C25836_OFFSET UNITYSDK_OFFSET(0x1DB3D170)
#define RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_F9500BFFD2643CF7_OFFSET UNITYSDK_OFFSET(0x1DB3D260)
#define RPG_GAMECORE_ST_MAIN_FOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3D200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_FollowTarget_TypeDefinitionIndex = 19888;

	class ST_Main_FollowTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_FollowMode Mode; // 0x18
		::RPG::GameCore::FollowTargetType FollowTargetType; // 0x1C
		::RPG::GameCore::TargetEvaluator* CustomFollowTarget; // 0x20
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x28
		::System::Single WaitProtectTime; // 0x2C
		::System::Single WaitActionTime; // 0x30
		::RPG::GameCore::TaskConfig* WaitActionTask; // 0x38
		::System::Single TransferDistance; // 0x40
		::System::Single EnterRushDistance; // 0x44
		::System::Single ExitRushDistance; // 0x48
		::System::Single RushChangeProtectTime; // 0x4C
		::System::Single ProtectTransferDistance; // 0x50
		::System::Single KeepDistance; // 0x54
		::System::Single FollowDistance; // 0x58
		::System::Single PuppyKeepMax; // 0x5C
		::System::Single PuppyKeepMin; // 0x60
		::System::Single PuppyKeepAngle; // 0x64
		::System::Single PuppyKeepAngleExclude; // 0x68
		::System::Single PuppyEnterFollowOffset; // 0x6C
		::System::String* PuppySpeedCurveAsset; // 0x70
		::System::Single PuppyAcceleration; // 0x78
		::System::Single NavigationTestThreshold; // 0x7C
		::RPG::GameCore::AdvancedFollowType FollowType; // 0x80
		::System::Single StartFollowDistance; // 0x84
		::System::Single StartFollowThreshold; // 0x88
		::System::Single ChooseSideInterval; // 0x8C
		::System::Single ChooseSlotInterval; // 0x90
		::Il2CppArray<::System::Int32>* PreferSlotIDs; // 0x98
		::System::Single PredictTime; // 0xA0
		::System::Single Halflife; // 0xA4
		::System::Single TeleportDistance; // 0xA8
		::System::Boolean NeedFaceToTarget; // 0xAC
		::System::Single FaceToTargetInternal; // 0xB0
		::System::Single FaceToTargetAngle; // 0xB4
		::System::String* TeleportOnEnter; // 0xB8
		::Class_2_93C60D7E85A35949* PacManFollowConfig; // 0xC0
		::System::Boolean NeedAvoid; // 0xC8
		::System::Single StartAvoidDistance; // 0xCC
		::System::Single StartAvoidTime; // 0xD0
		::System::Boolean NoTeleportInCamera; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FOLLOWTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_264316AD54C25836(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_FollowTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_FollowTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_264316AD54C25836_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F9500BFFD2643CF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_FollowTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_FollowTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_F9500BFFD2643CF7_OFFSET))(a1, a2);
		}
	};
}
