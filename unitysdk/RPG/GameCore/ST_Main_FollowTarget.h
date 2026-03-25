#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowTargetType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_FollowMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_6473A1BF3F103276_OFFSET UNITYSDK_OFFSET(0x17685710)
#define RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_86B246024D6F40AF_OFFSET UNITYSDK_OFFSET(0x17697A50)
#define RPG_GAMECORE_ST_MAIN_FOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17685670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_FollowTarget_TypeDefinitionIndex = 18412;

	class ST_Main_FollowTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_FollowMode Mode; // 0x18
		::RPG::GameCore::FollowTargetType FollowTargetType; // 0x1C
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x20
		::System::Single WaitProtectTime; // 0x24
		::System::Single WaitActionTime; // 0x28
		::RPG::GameCore::TaskConfig* WaitActionTask; // 0x30
		::System::Single TransferDistance; // 0x38
		::System::Single EnterRushDistance; // 0x3C
		::System::Single ExitRushDistance; // 0x40
		::System::Single RushChangeProtectTime; // 0x44
		::System::Single ProtectTransferDistance; // 0x48
		::System::Single KeepDistance; // 0x4C
		::System::Single FollowDistance; // 0x50
		::System::Single PuppyKeepMax; // 0x54
		::System::Single PuppyKeepMin; // 0x58
		::System::Single PuppyKeepAngle; // 0x5C
		::System::Single PuppyKeepAngleExclude; // 0x60
		::System::Single PuppyEnterFollowOffset; // 0x64
		::System::String* PuppySpeedCurveAsset; // 0x68
		::System::Single PuppyAcceleration; // 0x70
		::System::Single NavigationTestThreshold; // 0x74
		::RPG::GameCore::AdvancedFollowType FollowType; // 0x78
		::System::Single StartFollowDistance; // 0x7C
		::System::Single StartFollowThreshold; // 0x80
		::System::Single ChooseSideInterval; // 0x84
		::System::Single ChooseSlotInterval; // 0x88
		::Il2CppArray<::System::Int32>* PreferSlotIDs; // 0x90
		::System::Single PredictTime; // 0x98
		::System::Single Halflife; // 0x9C
		::System::Single TeleportDistance; // 0xA0
		::System::String* TeleportOnEnter; // 0xA8
		::System::Boolean NeedAvoid; // 0xB0
		::System::Single StartAvoidDistance; // 0xB4
		::System::Single StartAvoidTime; // 0xB8
		::System::Boolean NoTeleportInCamera; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FOLLOWTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_86B246024D6F40AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_FollowTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_FollowTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_86B246024D6F40AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6473A1BF3F103276(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_FollowTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_FollowTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FOLLOWTARGET_METHOD_4_6473A1BF3F103276_OFFSET))(a1, a2);
		}
	};
}
