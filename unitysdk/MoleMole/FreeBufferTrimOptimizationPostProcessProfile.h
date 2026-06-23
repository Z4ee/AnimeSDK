#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingPostProcessProfileBase.h"

class Class_1_BCCD4DFEA016B7F9;

#define MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x13EDC590)
#define MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDC600)
#define MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x13EDC610)

namespace MoleMole
{
	inline static constexpr unsigned int FreeBufferTrimOptimizationPostProcessProfile_TypeDefinitionIndex = 42596;

	class FreeBufferTrimOptimizationPostProcessProfile : public ::MoleMole::PerformanceSettingPostProcessProfileBase
	{
	public:
		::System::Boolean IsDisable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* __base_GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FREEBUFFERTRIMOPTIMIZATIONPOSTPROCESSPROFILE___BASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
