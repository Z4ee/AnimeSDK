#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x136E4FF0)
#define MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x136E5060)
#define MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x136E50F0)

namespace MoleMole
{
	inline static constexpr unsigned int NapPassSpecOptByGPUModelPostProcessorProfile_TypeDefinitionIndex = 51068;

	class NapPassSpecOptByGPUModelPostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Boolean SeparateAfterGbufferPass; // 0x18
		::System::Boolean LightLoopAfterGbuffer; // 0x19
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0x1C
		::System::Boolean oneLightPerPassOpt; // 0x20
		::System::Boolean EnableRefactorLayout; // 0x21
		::System::Boolean ShadowAfterGBuffer; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPPASSSPECOPTBYGPUMODELPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
