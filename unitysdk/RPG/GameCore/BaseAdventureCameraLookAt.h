#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraLookAtScreenRangeConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_METHOD_3_788438D614F85474_OFFSET UNITYSDK_OFFSET(0x194B94B0)
#define RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_METHOD_3_B61871BC8193DACB_OFFSET UNITYSDK_OFFSET(0x194B92C0)
#define RPG_GAMECORE_BASEADVENTURECAMERALOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x194B9470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseAdventureCameraLookAt_TypeDefinitionIndex = 22429;

	class BaseAdventureCameraLookAt : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean PlayerTurnTo; // 0x18
		::RPG::MVector2 AxisOffset; // 0x1C
		::System::Single LookAtTransitionDuration; // 0x24
		::System::Single LookAtTransitionAngleSpeed; // 0x28
		::System::String* LookAtTransitionCurvePath; // 0x30
		::System::Boolean LockCameraZoom; // 0x38
		::System::Boolean LockCameraInput; // 0x39
		::System::Boolean UnlockCameraAfterRecover; // 0x3A
		::System::Single LookAtDuration; // 0x3C
		::System::Single MaxAngle; // 0x40
		::System::Boolean CutIn; // 0x44
		::System::Boolean CutOut; // 0x45
		::RPG::GameCore::VCameraFreelook3rdConfig* ExtraFreelook3rdConfig; // 0x48
		::System::Boolean FollowLookAtTarget; // 0x50
		::System::Boolean KeepInputForwardDirection; // 0x51
		::RPG::GameCore::CameraLookAtScreenRangeConfig* ScreenRange; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEADVENTURECAMERALOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B61871BC8193DACB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseAdventureCameraLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseAdventureCameraLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_METHOD_3_B61871BC8193DACB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_788438D614F85474(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseAdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseAdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEADVENTURECAMERALOOKAT_METHOD_3_788438D614F85474_OFFSET))(a1, a2);
		}
	};
}
