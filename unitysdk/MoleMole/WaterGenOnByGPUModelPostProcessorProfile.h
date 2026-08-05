#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_WATERGENONBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11C2F700)
#define MOLEMOLE_WATERGENONBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2F770)
#define MOLEMOLE_WATERGENONBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11C2F7F0)

namespace MoleMole
{
	inline static constexpr unsigned int WaterGenOnByGPUModelPostProcessorProfile_TypeDefinitionIndex = 67571;

	class WaterGenOnByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean WaterGenOn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WATERGENONBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WATERGENONBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WATERGENONBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
