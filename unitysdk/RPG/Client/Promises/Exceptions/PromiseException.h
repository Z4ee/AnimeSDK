#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180F26E0)
#define RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x180F2740)
#define RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x180F2680)

namespace RPG::Client::Promises::Exceptions
{
	inline static constexpr unsigned int PromiseException_TypeDefinitionIndex = 8681;

	class PromiseException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISEEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISEEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}
	};
}
