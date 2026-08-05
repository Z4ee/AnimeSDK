#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ACCESSVIOLATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4408D0)
#define SYSTEM_ACCESSVIOLATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E440810)

namespace System
{
	inline static constexpr unsigned int AccessViolationException_TypeDefinitionIndex = 156;

	class AccessViolationException : public ::System::SystemException
	{
	public:
		::System::IntPtr _target; // 0x88
		::System::IntPtr _ip; // 0x90
		::System::Int32 _accessType; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ACCESSVIOLATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ACCESSVIOLATIONEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
