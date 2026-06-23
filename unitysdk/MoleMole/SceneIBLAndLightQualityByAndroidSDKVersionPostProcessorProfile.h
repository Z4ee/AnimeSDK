#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EIndirectionSpecularQuality.h"

class Class_1_BCCD4DFEA016B7F9;

#define MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x141A4670)
#define MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x141A46E0)
#define MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x141A46F0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneIBLAndLightQualityByAndroidSDKVersionPostProcessorProfile_TypeDefinitionIndex = 70210;

	class SceneIBLAndLightQualityByAndroidSDKVersionPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::UnityEngine::Rendering::Universal::EIndirectionSpecularQuality iblQuality; // 0x10
		::System::Int32 MaxSDKVersionThreshold; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEIBLANDLIGHTQUALITYBYANDROIDSDKVERSIONPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
