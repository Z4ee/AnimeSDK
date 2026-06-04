#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5302C0)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigIntegerException_TypeDefinitionIndex = 6474;

	class BigIntegerException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGEREXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
