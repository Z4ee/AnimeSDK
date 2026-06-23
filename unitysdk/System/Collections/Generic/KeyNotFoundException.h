#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B9FD800)
#define SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B9FD890)
#define SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FD740)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int KeyNotFoundException_TypeDefinitionIndex = 1555;

	class KeyNotFoundException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_KEYNOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
