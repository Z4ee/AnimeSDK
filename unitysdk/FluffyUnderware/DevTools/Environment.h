#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_DEVTOOLS_ENVIRONMENT_GET_ISTHREADINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1D6984C0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int Environment_TypeDefinitionIndex = 28342;

	class Environment : public ::System::Object
	{
	public:
		static ::System::Boolean get_IsThreadingSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_ENVIRONMENT_GET_ISTHREADINGSUPPORTED_OFFSET))();
		}
	};
}
