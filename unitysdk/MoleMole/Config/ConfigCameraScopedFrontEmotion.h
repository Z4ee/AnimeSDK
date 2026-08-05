#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ScopedFrontCameraControlEmotion; }
namespace MoleMole::Config { class ScopedFrontCameraControlEmotionOverrideEffector; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTEMOTION_INSTANTIATECONFIG_OFFSET UNITYSDK_OFFSET(0x14367500)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x143676B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFrontEmotion_TypeDefinitionIndex = 65108;

	class ConfigCameraScopedFrontEmotion : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ScopedFrontCameraControlEmotion* Emotion; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Config::ScopedFrontCameraControlEmotionOverrideEffector*>* OverrideConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTEMOTION__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigCameraScopedFrontEmotion* InstantiateConfig()
		{
			return ((::MoleMole::Config::ConfigCameraScopedFrontEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONTEMOTION_INSTANTIATECONFIG_OFFSET))(this);
		}
	};
}
