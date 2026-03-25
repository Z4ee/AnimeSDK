#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF3B90)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigIntegerException_TypeDefinitionIndex = 6089;

	class BigIntegerException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET))(this, message, innerException);
		}
	};
}
