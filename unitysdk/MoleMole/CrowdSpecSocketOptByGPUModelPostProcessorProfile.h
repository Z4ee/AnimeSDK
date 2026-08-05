#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1922C8E0)
#define MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1922C950)
#define MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1922C9D0)

namespace MoleMole
{
	inline static constexpr unsigned int CrowdSpecSocketOptByGPUModelPostProcessorProfile_TypeDefinitionIndex = 42924;

	class CrowdSpecSocketOptByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean CrowdSpecSocketOpt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CROWDSPECSOCKETOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
