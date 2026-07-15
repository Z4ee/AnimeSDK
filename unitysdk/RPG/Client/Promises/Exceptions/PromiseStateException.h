#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/Exceptions/PromiseException.h"

namespace System { class Exception; }
namespace System { class String; }

#define RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISESTATEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D2C44B0)
#define RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISESTATEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D2C4510)
#define RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISESTATEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C4450)

namespace RPG::Client::Promises::Exceptions
{
	inline static constexpr unsigned int PromiseStateException_TypeDefinitionIndex = 9597;

	class PromiseStateException : public ::RPG::Client::Promises::Exceptions::PromiseException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISESTATEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISESTATEEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_EXCEPTIONS_PROMISESTATEEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
