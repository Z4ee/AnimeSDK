#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_TIMERELAYFLAMEGAMECONFIG_METHOD_3_38D156DA39370E28_OFFSET UNITYSDK_OFFSET(0x19099270)
#define RPG_GAMECORE_TIMERELAYFLAMEGAMECONFIG_METHOD_3_72265706A59D9EAD_OFFSET UNITYSDK_OFFSET(0x190992B0)
#define RPG_GAMECORE_TIMERELAYFLAMEGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190992A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRelayFlameGameConfig_TypeDefinitionIndex = 16096;

	class TimeRelayFlameGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::Single StepTime; // 0x10
		::System::Single ResetCD; // 0x14
		::System::Single SwitchStageCD; // 0x18
		::System::Single DissolveDelayTime; // 0x1C
		::System::Single DissolveTime; // 0x20
		::System::Single DissolveWaitTime; // 0x24
		::System::String* PlayerPrefab; // 0x28
		::System::String* ClonedPlayerPrefab; // 0x30
		::System::String* ArrowPrefab; // 0x38
		::System::Boolean EnableCameraShake; // 0x40
		::System::Single CrashWaitTime; // 0x44
		::System::Single FallWaitTime; // 0x48
		::System::String* BulletPrefab; // 0x50
		::System::Single BulletFlyTime; // 0x58
		::System::Single BulletExtraTime; // 0x5C
		::System::String* CrashEffect; // 0x60
		::System::String* RingEffect; // 0x68
		::System::UInt32 FallAchievement; // 0x70
		::System::UInt32 TeleportAchievement; // 0x74
		::System::Single TeleportWaitTime; // 0x78
		::System::Single TeleportLoopWaitTime; // 0x7C
		::System::UInt32 TeleportLoopCount; // 0x80
		::System::Single TeleportLoopFirstTime; // 0x84
		::System::Single TeleportLoopTimeAttenuationRatio; // 0x88
		::RPG::GameCore::VCameraShakeV2* CameraShake; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMEGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38D156DA39370E28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRelayFlameGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRelayFlameGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMEGAMECONFIG_METHOD_3_38D156DA39370E28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72265706A59D9EAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRelayFlameGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRelayFlameGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMEGAMECONFIG_METHOD_3_72265706A59D9EAD_OFFSET))(a1, a2);
		}
	};
}
