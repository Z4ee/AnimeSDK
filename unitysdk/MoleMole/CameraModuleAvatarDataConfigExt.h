#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraModuleAvatarDataConfig.h"

namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }

#define MOLEMOLE_CAMERAMODULEAVATARDATACONFIGEXT_INIT_OFFSET UNITYSDK_OFFSET(0x13FF0AA0)
#define MOLEMOLE_CAMERAMODULEAVATARDATACONFIGEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF0D90)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleAvatarDataConfigExt_TypeDefinitionIndex = 43598;

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
