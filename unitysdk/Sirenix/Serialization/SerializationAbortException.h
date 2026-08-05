#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONABORTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB194F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONABORTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB19470)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationAbortException_TypeDefinitionIndex = 7532;

	class SerializationAbortException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONABORTEXCEPTION__CTOR_OFFSET))(this, message);
		}

		::System::Void _ctor_1(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONABORTEXCEPTION__CTOR_1_OFFSET))(this, message, innerException);
		}
	};
}
