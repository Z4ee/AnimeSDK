#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1859E940)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_GET_FUSIONLOG_OFFSET UNITYSDK_OFFSET(0x1859E930)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1859E140)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x1859E210)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1859E2D0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1859DFF0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1859E060)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1859E0D0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1859E830)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1859DF50)

namespace System
{
	inline static constexpr unsigned int BadImageFormatException_TypeDefinitionIndex = 203;

	class BadImageFormatException : public ::System::SystemException
	{
	public:
		::System::String* _fusionLog; // 0x88
		::System::String* _fileName; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
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

		::System::String* get_FusionLog()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GET_FUSIONLOG_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
