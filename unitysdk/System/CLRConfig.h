#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_CLRCONFIG_CHECKTHROWUNOBSERVEDTASKEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1C9C7740)
#define SYSTEM_CLRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C7750)

namespace System
{
	inline static constexpr unsigned int CLRConfig_TypeDefinitionIndex = 356;

	class CLRConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CLRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Boolean CheckThrowUnobservedTaskExceptions()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_CLRCONFIG_CHECKTHROWUNOBSERVEDTASKEXCEPTIONS_OFFSET))();
		}
	};
}
