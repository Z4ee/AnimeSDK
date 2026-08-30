#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_UI3DCONTROLLERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE3152B0)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DControllerConfig_TypeDefinitionIndex = 72919;

	class UI3DControllerConfig : public ::System::Object
	{
	public:
		// static const ::System::String* DEFAULT_ENVIRONMENT_PROFILE_PATH; // 0x0
		::System::String* SourceCameraRelativePath; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* EnvironmentProfilePath; // 0x20
		::System::Boolean UseGlobalCamera; // 0x28
		::System::Boolean UseScreenTransfer; // 0x29
		::System::Boolean UseBelowTransfer; // 0x2A
		::System::Boolean JoinUILoad; // 0x2B
		::System::Boolean UseMainScene; // 0x2C
		::System::Boolean UnloadScene; // 0x2D
		::System::Boolean IsAsyncLoad; // 0x2E
		::System::Boolean UseCameraAudioListener; // 0x2F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
