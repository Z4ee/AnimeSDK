#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL__CTOR_OFFSET UNITYSDK_OFFSET(0x12317E90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVentCrawl_TypeDefinitionIndex = 74150;

	class ConfigVentCrawl : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Cameras::OverShoulderCameraConfig* CameraConfig; // 0x58
		::System::Single CameraYawRotateAngleLimit; // 0x60
		::System::Single CameraYawAngleLookAtDirectionDamping; // 0x64
		::System::Single CameraTurnLookAtDamping; // 0x68
		::System::Single CameraTurnLookAtTime; // 0x6C
		::System::String* MovingCameraShakeKey; // 0x70
		::MoleMole::Battle::AnimatorParamControl* StartAnimatorParamControl; // 0x78
		::MoleMole::Battle::AnimatorParamControl* EndAnimatorParamControl; // 0x80
		::System::Single StartActingDelayTime; // 0x88
		::System::String* StartEndDitherKey; // 0x90
		::System::Single PathPointDistanceThreshold; // 0x98
		::System::Single MoveInputAngleThreshold; // 0x9C
		::System::Single CheckUpslopeAngleThreshold; // 0xA0
		::System::Single CheckDownslopeAngleThreshold; // 0xA4
		::System::Single CheckTurnXZAngleThreshold; // 0xA8
		::System::String* EnterPipeSoundAction; // 0xB0
		::System::String* ExitPipeCommonSoundAction; // 0xB8
		::System::String* ExitPipeClimbSoundAction; // 0xC0
		::System::String* ExitPipeJumpSoundAction; // 0xC8
		::System::String* ClimbStraightSoundAction; // 0xD0
		::System::String* ClimbUpSoundAction; // 0xD8
		::System::String* ClimbDownSoundAction; // 0xE0
		::System::String* TurnSoundAction; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL__CTOR_OFFSET))(this);
		}
	};
}
