#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define RPG_CLIENT_PROMISES_PROMISECANCELLEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18E99300)
#define RPG_CLIENT_PROMISES_PROMISECANCELLEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E992A0)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseCancelledException_TypeDefinitionIndex = 9551;

	class PromiseCancelledException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISECANCELLEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISECANCELLEDEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}
	};
}
