#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C6BC610)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1C6BBF10)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x1C6BBFD0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6BC090)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6BBD50)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6BBDE0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C6BBE70)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1C6BC510)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BBC90)

namespace System
{
	inline static constexpr unsigned int BadImageFormatException_TypeDefinitionIndex = 192;

	class BadImageFormatException : public ::System::SystemException
	{
	public:
		::System::String* _fileName; // 0x88
		::System::String* _fusionLog; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_3(::System::String* message, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_3_OFFSET))(this, message, fileName);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
