#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x195D9980)
#define SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x195D9800)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195D9510)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x195D95A0)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x195D9630)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x195D96D0)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x195D9770)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x195D9450)

namespace System
{
	inline static constexpr unsigned int ArgumentException_TypeDefinitionIndex = 181;

	class ArgumentException : public ::System::SystemException
	{
	public:
		::System::String* m_paramName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_2_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_3(::System::String* message, ::System::String* paramName, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_3_OFFSET))(this, message, paramName, innerException);
		}

		::System::Void _ctor_4(::System::String* message, ::System::String* paramName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_4_OFFSET))(this, message, paramName);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_5_OFFSET))(this, info, context);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
