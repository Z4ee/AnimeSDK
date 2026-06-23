#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ARITHMETICEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD9D2A0)
#define SYSTEM_ARITHMETICEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ADA27C0)
#define SYSTEM_ARITHMETICEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1ADA2850)
#define SYSTEM_ARITHMETICEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA2700)

namespace System
{
	inline static constexpr unsigned int ArithmeticException_TypeDefinitionIndex = 184;

	class ArithmeticException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARITHMETICEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
