#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ScopedFrontCameraControlEmotion; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15898A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontEmotion_TypeDefinitionIndex = 73723;

	class ConfigCameraScopedFrontEmotion : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ScopedFrontCameraControlEmotion* Emotion; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTEMOTION__CTOR_OFFSET))(this);
		}
	};
}
