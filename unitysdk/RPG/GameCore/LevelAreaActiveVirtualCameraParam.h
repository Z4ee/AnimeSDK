#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelEntityVCameraConfig; }

#define RPG_GAMECORE_LEVELAREAACTIVEVIRTUALCAMERAPARAM_RESET_OFFSET UNITYSDK_OFFSET(0xCE32A30)
#define RPG_GAMECORE_LEVELAREAACTIVEVIRTUALCAMERAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaActiveVirtualCameraParam_TypeDefinitionIndex = 54045;

	class LevelAreaActiveVirtualCameraParam : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelEntityVCameraConfig* LevelEntityVCameraConfig; // 0x10
		::System::Boolean KeepVCamNearClipPlane; // 0x18
		::System::Boolean LookAtLocalPlayer; // 0x19
		::System::Single OrthographicSize; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAACTIVEVIRTUALCAMERAPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAACTIVEVIRTUALCAMERAPARAM_RESET_OFFSET))(this);
		}
	};
}
