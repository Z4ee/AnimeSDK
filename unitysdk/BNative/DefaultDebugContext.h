#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BNATIVE_DEFAULTDEBUGCONTEXT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x14A8F5D0)
#define BNATIVE_DEFAULTDEBUGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14A8F5C0)

namespace BNative
{
	inline static constexpr unsigned int DefaultDebugContext_TypeDefinitionIndex = 61587;

	class DefaultDebugContext : public ::System::Object
	{
	public:
		::System::Object* _obj; // 0x10

		::System::Void _ctor(::System::Object* self)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUGCONTEXT__CTOR_OFFSET))(this, self);
		}

		::System::String* get_message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNATIVE_DEFAULTDEBUGCONTEXT_GET_MESSAGE_OFFSET))(this);
		}
	};
}
