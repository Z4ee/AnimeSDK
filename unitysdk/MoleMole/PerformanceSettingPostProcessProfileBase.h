#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BCCD4DFEA016B7F9;

#define MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x115F8310)
#define MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x115F8290)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingPostProcessProfileBase_TypeDefinitionIndex = 68679;

	class PerformanceSettingPostProcessProfileBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE__CTOR_OFFSET))(this);
		}

		::Class_1_BCCD4DFEA016B7F9* GetPerformanceProfilePostProcessor()
		{
			return ((::Class_1_BCCD4DFEA016B7F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
