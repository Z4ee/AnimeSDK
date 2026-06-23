#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB20420)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigIntegerException_TypeDefinitionIndex = 19164;

	class BigIntegerException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET))(this, message, innerException);
		}
	};
}
