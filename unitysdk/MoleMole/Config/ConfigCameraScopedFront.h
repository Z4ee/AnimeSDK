#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigCameraScopedFrontOverrideEffector; }
namespace MoleMole::Config { class ScopedFrontCameraControlConfigInput; }
namespace MoleMole::Photo { class ScopedFrontCameraControlConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONT_GETSCOPEDFRONTCAMERACONTROLCONFIG_OFFSET UNITYSDK_OFFSET(0xFB01E30)
#define MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB020B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraScopedFront_TypeDefinitionIndex = 40889;

	class ConfigCameraScopedFront : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Photo::ScopedFrontCameraControlConfig* Config; // 0x58
		::MoleMole::Config::ScopedFrontCameraControlConfigInput* Input; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScopedFrontOverrideEffector*>* OverrideConfigs; // 0x68
		::MoleMole::Photo::ScopedFrontCameraControlConfig* _runtimeOverrideConfig; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONT__CTOR_OFFSET))(this);
		}

		::MoleMole::Photo::ScopedFrontCameraControlConfig* GetScopedFrontCameraControlConfig()
		{
			return ((::MoleMole::Photo::ScopedFrontCameraControlConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASCOPEDFRONT_GETSCOPEDFRONTCAMERACONTROLCONFIG_OFFSET))(this);
		}
	};
}
