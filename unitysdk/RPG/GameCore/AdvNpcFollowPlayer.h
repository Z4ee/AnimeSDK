#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVNPCFOLLOWPLAYER_METHOD_3_8A63BAB2BE5507B3_OFFSET UNITYSDK_OFFSET(0x18659470)
#define RPG_GAMECORE_ADVNPCFOLLOWPLAYER_METHOD_3_CC9AEFF5AD4DE287_OFFSET UNITYSDK_OFFSET(0x18659570)
#define RPG_GAMECORE_ADVNPCFOLLOWPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18659500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcFollowPlayer_TypeDefinitionIndex = 18906;

	class AdvNpcFollowPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FollowMode Mode; // 0x18
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x1C
		::System::Single WaitProtectTime; // 0x20
		::System::Single WaitActionTime; // 0x24
		::RPG::GameCore::TaskConfig* WaitActionTask; // 0x28
		::System::Single TransferDistance; // 0x30
		::System::Single EnterRushDistance; // 0x34
		::System::Single ExitRushDistance; // 0x38
		::System::Single RushChangeProtectTime; // 0x3C
		::System::Single ProtectTransferDistance; // 0x40
		::System::Boolean NoAutoDisableTalk; // 0x44
		::System::Boolean NeedAvoid; // 0x45
		::System::Single StartAvoidDistance; // 0x48
		::System::Single StartAvoidTime; // 0x4C
		::System::Single KeepDistance; // 0x50
		::System::Single FollowDistance; // 0x54
		::System::Single PuppyKeepMax; // 0x58
		::System::Single PuppyKeepMin; // 0x5C
		::System::Single PuppyKeepAngle; // 0x60
		::System::Single PuppyKeepAngleExclude; // 0x64
		::System::Single PuppyEnterFollowOffset; // 0x68
		::System::String* PuppySpeedCurveAsset; // 0x70
		::System::Single PuppyAcceleration; // 0x78
		::System::Single NavigationTestThreshold; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A63BAB2BE5507B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFollowPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFollowPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWPLAYER_METHOD_3_8A63BAB2BE5507B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CC9AEFF5AD4DE287(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcFollowPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcFollowPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCFOLLOWPLAYER_METHOD_3_CC9AEFF5AD4DE287_OFFSET))(a1, a2);
		}
	};
}
