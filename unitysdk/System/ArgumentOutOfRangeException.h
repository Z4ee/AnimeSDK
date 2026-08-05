#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CD30E90)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD30CE0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_RANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD308B0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD30A60)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CD30B90)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CD30C30)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CD30FD0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD30930)

namespace System
{
	inline static constexpr unsigned int ArgumentOutOfRangeException_TypeDefinitionIndex = 183;

	class ArgumentOutOfRangeException : public ::System::ArgumentException
	{
	public:
		static ::System::String** StaticGet__rangeMessage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ArgumentOutOfRangeException_TypeDefinitionIndex)->GetStaticField(0xB00);
		}
		::System::Object* m_actualValue; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* paramName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_1_OFFSET))(this, paramName);
		}

		::System::Void _ctor_2(::System::String* paramName, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_2_OFFSET))(this, paramName, message);
		}

		::System::Void _ctor_3(::System::String* paramName, ::System::Object* actualValue, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_3_OFFSET))(this, paramName, actualValue, message);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}

		static ::System::String* get_RangeMessage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_RANGEMESSAGE_OFFSET))();
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
