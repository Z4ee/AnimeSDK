#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x18591CF0)
#define SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x18591B50)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185918F0)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18591960)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x185919D0)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18591A50)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x18591AC0)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18591850)

namespace System
{
	inline static constexpr unsigned int ArgumentException_TypeDefinitionIndex = 192;

	class ArgumentException : public ::System::SystemException
	{
	public:
		::System::String* m_paramName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
