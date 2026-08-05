#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E10F240)
#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E1151A0)
#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E115240)
#define SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1150E0)

namespace System
{
	inline static constexpr unsigned int ArgumentNullException_TypeDefinitionIndex = 182;

	class ArgumentNullException : public ::System::ArgumentException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* paramName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_1_OFFSET))(this, paramName);
		}

		::System::Void _ctor_2(::System::String* paramName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_2_OFFSET))(this, paramName, message);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTNULLEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
