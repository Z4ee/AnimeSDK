#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraModuleAvatarDataConfig.h"

namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }

#define MOLEMOLE_CAMERAMODULEAVATARDATACONFIGEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1279F110)
#define MOLEMOLE_CAMERAMODULEAVATARDATACONFIGEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1279F400)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleAvatarDataConfigExt_TypeDefinitionIndex = 47847;

	class CameraModuleAvatarDataConfigExt : public ::MoleMole::CameraModuleAvatarDataConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEAVATARDATACONFIGEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::Config::PipelineCameraAvatarConfigData* globalConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PipelineCameraAvatarConfigData*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEAVATARDATACONFIGEXT_INIT_OFFSET))(this, globalConfig);
		}
	};
}
