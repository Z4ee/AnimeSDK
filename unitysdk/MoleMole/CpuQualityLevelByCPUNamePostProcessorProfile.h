#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x190D4090)
#define MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D4100)
#define MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x190D4280)

namespace MoleMole
{
	inline static constexpr unsigned int CpuQualityLevelByCPUNamePostProcessorProfile_TypeDefinitionIndex = 41343;

	class CpuQualityLevelByCPUNamePostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MediumCPUNameRegexList; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* UltraCPUNameRegexList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* HighCPUNameRegexList; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* LowCPUNameRegexList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CPUQUALITYLEVELBYCPUNAMEPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
