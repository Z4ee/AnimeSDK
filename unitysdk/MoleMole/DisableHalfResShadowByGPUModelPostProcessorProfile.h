#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DISABLEHALFRESSHADOWBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1BD82500)
#define MOLEMOLE_DISABLEHALFRESSHADOWBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD82570)
#define MOLEMOLE_DISABLEHALFRESSHADOWBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1BD825F0)

namespace MoleMole
{
	inline static constexpr unsigned int DisableHalfResShadowByGPUModelPostProcessorProfile_TypeDefinitionIndex = 45740;

	class DisableHalfResShadowByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean DisableHalfResShadow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEHALFRESSHADOWBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEHALFRESSHADOWBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEHALFRESSHADOWBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
