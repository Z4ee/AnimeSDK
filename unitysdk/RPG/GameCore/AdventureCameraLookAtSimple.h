#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraLookAtScreenRangeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_METHOD_3_0C1DB8355CB0B338_OFFSET UNITYSDK_OFFSET(0x16F50070)
#define RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_METHOD_3_14C1AF16396BD9B4_OFFSET UNITYSDK_OFFSET(0x16F4FFE0)
#define RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F50040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraLookAtSimple_TypeDefinitionIndex = 18807;

	class AdventureCameraLookAtSimple : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x20
		::RPG::GameCore::DynamicString* LookAtTargetAreaName; // 0x28
		::RPG::GameCore::DynamicString* LookAtTargetAnchorName; // 0x30
		::RPG::GameCore::DynamicFloat* LookAtGroupID; // 0x38
		::RPG::GameCore::DynamicFloat* LookAtID; // 0x40
		::System::Boolean CutIn; // 0x48
		::System::Boolean CutOut; // 0x49
		::System::Single LookAtTransitionDuration; // 0x4C
		::System::Single LookAtTransitionAngleSpeed; // 0x50
		::System::String* LookAtTransitionCurvePath; // 0x58
		::System::Boolean LockCameraZoom; // 0x60
		::System::Boolean LockCameraInput; // 0x61
		::System::Boolean UnlockCameraAfterRecover; // 0x62
		::System::Single LookAtDuration; // 0x64
		::System::Single LookAtRecoverDuration; // 0x68
		::System::String* LookAtRecoverCurvePath; // 0x70
		::System::Boolean EnableOverrideLookAtOffset; // 0x78
		::RPG::MVector3 OverrideLookAtOffset; // 0x7C
		::System::Boolean FollowLookAtTarget; // 0x88
		::System::Boolean KeepInputForwardDirection; // 0x89
		::RPG::GameCore::CameraLookAtScreenRangeConfig* ScreenRange; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14C1AF16396BD9B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAtSimple*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAtSimple*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_METHOD_3_14C1AF16396BD9B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C1DB8355CB0B338(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAtSimple* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAtSimple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKATSIMPLE_METHOD_3_0C1DB8355CB0B338_OFFSET))(a1, a2);
		}
	};
}
