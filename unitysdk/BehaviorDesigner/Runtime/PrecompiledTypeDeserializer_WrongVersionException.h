#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"

#define BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_WRONGVERSIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FACF0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int PrecompiledTypeDeserializer_WrongVersionException_TypeDefinitionIndex = 33255;

	class PrecompiledTypeDeserializer_WrongVersionException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_PRECOMPILEDTYPEDESERIALIZER_WRONGVERSIONEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
