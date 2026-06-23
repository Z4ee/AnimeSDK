#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;

#define MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x17389200)
#define MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17389270)
#define MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x17389280)

namespace MoleMole
{
	inline static constexpr unsigned int StreamingMipmapsByVRAMPostProcessProfile_TypeDefinitionIndex = 84595;

	class StreamingMipmapsByVRAMPostProcessProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Single VRAMThreshold; // 0x10
		::System::Single StreamingBudget; // 0x14
		::System::Boolean ApplyStreamingTextureMaster; // 0x18
		::System::Boolean StreamingMipmapsActive; // 0x19
		::System::Int32 StreamingTextureMaster; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STREAMINGMIPMAPSBYVRAMPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
