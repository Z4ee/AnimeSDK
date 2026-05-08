#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_APPDOMAINUNLOADEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EB7200)
#define SYSTEM_APPDOMAINUNLOADEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB7140)

namespace System
{
	inline static constexpr unsigned int AppDomainUnloadedException_TypeDefinitionIndex = 179;

	class AppDomainUnloadedException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINUNLOADEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINUNLOADEDEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
