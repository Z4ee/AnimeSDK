#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;
namespace MoleMole { class GeneralGraphicQualityProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_OVERRIDEGENERALGRAPHICPROFILEPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11647EE0)
#define MOLEMOLE_OVERRIDEGENERALGRAPHICPROFILEPOSTPROCESSORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x11647F50)
#define MOLEMOLE_OVERRIDEGENERALGRAPHICPROFILEPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11648040)

namespace MoleMole
{
	inline static constexpr unsigned int OverrideGeneralGraphicProfilePostProcessorProfile_TypeDefinitionIndex = 55645;

	class OverrideGeneralGraphicProfilePostProcessorProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GPUModelRegexList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GeneralGraphicQualityProfileContext*>* OverrideGeneralGraphicProfileContextDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERRIDEGENERALGRAPHICPROFILEPOSTPROCESSORPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERRIDEGENERALGRAPHICPROFILEPOSTPROCESSORPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OVERRIDEGENERALGRAPHICPROFILEPOSTPROCESSORPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
