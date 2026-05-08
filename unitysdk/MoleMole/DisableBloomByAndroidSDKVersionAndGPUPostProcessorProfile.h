#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x18F3AE90)
#define MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3AF00)
#define MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x18F3AF90)

namespace MoleMole
{
	inline static constexpr unsigned int DisableBloomByAndroidSDKVersionAndGPUPostProcessorProfile_TypeDefinitionIndex = 40729;

	class DisableBloomByAndroidSDKVersionAndGPUPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Int32 MaxSDKVersionThreshold; // 0x18
		::System::Boolean DisableBloom; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISABLEBLOOMBYANDROIDSDKVERSIONANDGPUPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
