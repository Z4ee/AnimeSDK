#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_CLRCONFIG_CHECKTHROWUNOBSERVEDTASKEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x161BBF40)

namespace System
{
	inline static constexpr unsigned int CLRConfig_TypeDefinitionIndex = 367;

	class CLRConfig : public ::System::Object
	{
	public:
		static ::System::Boolean CheckThrowUnobservedTaskExceptions()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_CLRCONFIG_CHECKTHROWUNOBSERVEDTASKEXCEPTIONS_OFFSET))();
		}
	};
}
