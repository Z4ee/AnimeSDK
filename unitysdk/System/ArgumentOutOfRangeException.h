#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArgumentException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BB95F80)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1BB95D40)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_RANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BB95A80)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB95B90)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BB95C50)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BB95CC0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BB960C0)
#define SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB95AD0)

namespace System
{
	inline static constexpr unsigned int ArgumentOutOfRangeException_TypeDefinitionIndex = 194;

	class ArgumentOutOfRangeException : public ::System::ArgumentException
	{
	public:
		static ::System::String** StaticGet__rangeMessage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ArgumentOutOfRangeException_TypeDefinitionIndex)->GetStaticField(0x7880);
		}
		::System::Object* m_actualValue; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		static ::System::String* get_RangeMessage()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_RANGEMESSAGE_OFFSET))();
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTOUTOFRANGEEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
